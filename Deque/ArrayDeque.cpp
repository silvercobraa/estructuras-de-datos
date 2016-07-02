#ifndef _ARRAY_DEQUE_CPP_
#define _ARRAY_DEQUE_CPP_

#include "ArrayDeque.hpp"

template <typename E>
ArrayDeque<E>::ArrayDeque()
{
	this->capacity = CAPACITY;
	this->elements = new E[CAPACITY];
}


template <typename E>
ArrayDeque<E>::ArrayDeque(int cap)
{
	this->capacity = cap;
	this->elements = new E[cap];
}


template <typename E>
ArrayDeque<E>::~ArrayDeque()
{
	delete elements;
}


template <typename E>
int ArrayDeque<E>::size()
{
	return current_size;
}


template <typename E>
bool ArrayDeque<E>::is_empty()
{
	return current_size == 0;
}


template <typename E>
void ArrayDeque<E>::add_first(E element)
{
	if (current_size == capacity)
	{
		throw FULL_DEQUE_EXCEPTION;
	}
	if (current_size != 0)
	{
		first_element = (first_element + capacity - 1)%capacity;
	}
	elements[first_element] = element;
	current_size++;
}


template <typename E>
void ArrayDeque<E>::add_last(E element)
{
	if (current_size == capacity)
	{
		throw FULL_DEQUE_EXCEPTION;
	}
	if (current_size != 0)
	{
		last_element = (last_element + capacity + 1)%capacity;
	}
	elements[last_element] = element;
	current_size++;
}


template <typename E>
E ArrayDeque<E>::first()
{
	if (is_empty())
	{
		throw EMPTY_DEQUE_EXCEPTION;
	}
	return elements[first_element];
}


template <typename E>
E ArrayDeque<E>::last()
{
	if (is_empty())
	{
		throw EMPTY_DEQUE_EXCEPTION;
	}
	return elements[last_element];
}


template <typename E>
E ArrayDeque<E>::remove_first()
{
	if (is_empty())
	{
		throw EMPTY_DEQUE_EXCEPTION;
	}
	E aux = elements[first_element];
	elements[first_element] = (E)0;
	current_size--;
	// Se avanza circularmente excepto cuando ya no quedan mas elementos en la
	// deque, de lo contrario first_element y last_element quedarían desfasados
	// al volver al insertar un nuevo primer elemento.
	if (current_size != 0)
	{
		first_element = (first_element + 1)%capacity;
	}
	return aux;
}


template <typename E>
E ArrayDeque<E>::remove_last()
{
	if (is_empty())
	{
		throw EMPTY_DEQUE_EXCEPTION;
	}
	E aux = elements[last_element];
	elements[last_element] = (E)0;
	current_size--;
	// Se retrocede circularmente excepto cuando ya no quedan mas elementos en la
	// deque, de lo contrario first_element y last_element quedarían desfasados
	// al volver al insertar un nuevo primer elemento.
	if (current_size != 0)
	{
		last_element = (last_element + capacity - 1)%capacity;
	}
	return aux;
}


#endif /* end of include guard: _ARRAY_DEQUE_CPP_ */
