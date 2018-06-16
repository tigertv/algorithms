#include <iostream>
#include <vector>

template <class T>
class Stack { 
	std::vector<T> elems;     
	unsigned int size;
public:
	Stack(unsigned int size);
	void push(T const&);   
	void pop();
	T top() const;

	bool empty() const {
		return this->elems.empty(); 
	} 
}; 

template <class T>
Stack<T>::Stack(unsigned int size) {
	this->size = size;
}

template <class T>
void Stack<T>::push (T const& elem) { 
	if (this->elems.size() == this->size) {
		throw std::out_of_range("Stack<>::push(): stack is full");
	}
	// append copy of passed element 
	elems.push_back(elem);    
} 

template <class T>
void Stack<T>::pop () { 
   if (elems.empty()) { 
      throw std::out_of_range("Stack<>::pop(): empty stack"); 
   }
   
   // remove last element 
   elems.pop_back();         
} 

template <class T>
T Stack<T>::top () const { 
   if (elems.empty()) { 
      throw std::out_of_range("Stack<>::top(): empty stack"); 
   }
   
   // return copy of last element 
   return elems.back();      
}

int main() { 
	try {
		Stack<int> intStack(5);					// stack of ints 
		Stack<std::string> stringStack(3);		// stack of strings 

		// manipulate int stack 
		intStack.push(100); 
		intStack.push(100); 
		intStack.push(100); 
		std::cout << intStack.top() << std::endl; 
		intStack.pop();
		intStack.pop();
		intStack.pop();

		// manipulate string stack 
		stringStack.push("hello"); 
		stringStack.push("hello"); 
		stringStack.push("mmal"); 
		stringStack.push("msmal"); 

		std::cout << stringStack.top() << std::endl; 

		stringStack.pop(); 
		stringStack.pop(); 
	} catch (std::exception const& ex) { 
		std::cerr << "Exception: " << ex.what() << std::endl; 
		return -1;
	} 
	return 0;
} 
