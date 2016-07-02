#ifndef _ARRAY_QUEUE_CPP_
#define _ARRAY_QUEUE_CPP_

#include "ArrayQueue.hpp"

template <typename E>
ArrayQueue<E>::ArrayQueue()
{
	this->capacity = CAPACITY;
	this->elements = new E[CAPACITY];
}


template <typename E>
ArrayQueue<E>::ArrayQueue(int cap)
{
	this->capacity = cap;
	this->elements = new E[cap];
}


template <typename E>
ArrayQueue<E>::~ArrayQueue()
{
	delete elements;
}


template <typename E>
int ArrayQueue<E>::size()
{
	return current_size;
}


template <typename E>
bool ArrayQueue<E>::is_empty()
{
	return current_size == 0;
}


template <typename E>
void ArrayQueue<E>::enqueue(E element)
{
	if (current_size == capacity)
	{
		throw FULL_QUEUE_EXCEPTION;
	}
	elements[(first_element + current_size)%capacity] = element;
	current_size++;
}


template <typename E>
E ArrayQueue<E>::first()
{
	if (is_empty())
	{
		throw EMPTY_QUEUE_EXCEPTION;
	}
	return elements[first_element];
}


template <typename E>
E ArrayQueue<E>::dequeue()
{
	if (is_empty())
	{
		throw EMPTY_QUEUE_EXCEPTION;
	}
	E aux = elements[first_element];
	first_element = (first_element + 1)%capacity;
	current_size--;
	return aux;
}


#endif /* end of include guard: _ARRAY_QUEUE_CPP_ */
