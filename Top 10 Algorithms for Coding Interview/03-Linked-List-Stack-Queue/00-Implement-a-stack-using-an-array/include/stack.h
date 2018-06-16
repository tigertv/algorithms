#ifndef STACK_H
#define STACK_H

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

	bool empty() const;
}; 

#endif
