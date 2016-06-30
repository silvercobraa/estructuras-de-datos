#ifndef _ARRAY_STACK_CPP_
#define _ARRAY_STACK_CPP_

#include <fstream>
#include "ArrayStack.hpp"

template <typename E>
ArrayStack<E>::ArrayStack()
{
	this->capacity = CAPACITY;
	this->elements = new E[CAPACITY];
}


template <typename E>
ArrayStack<E>::ArrayStack(int cap)
{
	this->capacity = cap;
	this->elements = new E[cap];
}


template <typename E>
ArrayStack<E>::~ArrayStack()
{
	delete elements;
}


template <typename E>
int ArrayStack<E>::size()
{
	return current_size;
}


template <typename E>
bool ArrayStack<E>::is_empty()
{
	return current_size == 0;
}


template <typename E>
void ArrayStack<E>::push(E element)
{
	if (current_size == capacity)
	{
		throw FULL_STACK_EXCEPTION;
	}
	elements[current_size] = element;
	current_size++;
}


template <typename E>
E ArrayStack<E>::top()
{
	if (is_empty())
	{
		throw EMPTY_STACK_EXCEPTION;
	}
	return elements[current_size - 1];
}


template <typename E>
E ArrayStack<E>::pop()
{
	if (is_empty())
	{
		throw EMPTY_STACK_EXCEPTION;
	}
	E aux = elements[current_size - 1];
	current_size--;
	return aux;
}


#endif /* end of include guard: _ARRAY_STACK_CPP_ */
