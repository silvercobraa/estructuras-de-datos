#ifndef _ARRAY_STACK_HPP_
#define _ARRAY_STACK_HPP_

#include <iostream>
#include "Stack.hpp"

template <typename E>
class ArrayStack : public Stack<E>
{
private:
	int capacity = 0;
	E* elements = NULL;
	int current_size = 0;
public:
    static const int CAPACITY = 1000;
    static const int EMPTY_STACK_EXCEPTION = -1;
    static const int FULL_STACK_EXCEPTION = -2;

	ArrayStack();
    ArrayStack(int cap);
	~ArrayStack();

	int size();
	bool is_empty();
	void push(E element);
	E top();
	E pop();
};

#include "ArrayStack.cpp"

#endif /* end of include guard: _ARRAY_STACK_HPP_ */
