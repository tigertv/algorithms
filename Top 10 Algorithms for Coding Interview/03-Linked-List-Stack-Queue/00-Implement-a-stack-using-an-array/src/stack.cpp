#include "stack.h"
#include <iostream>

template <class T>
bool Stack<T>::empty() const{ 
	return this->elems.empty(); 
}

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
 
