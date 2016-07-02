#ifndef _LINKED_STACK_CPP_
#define _LINKED_STACK_CPP_

#include "LinkedStack.hpp"

template <typename E>
LinkedStack<E>::LinkedStack()
{
	elements = new SingleLinkedList<E>();
}


template <typename E>
LinkedStack<E>::~LinkedStack()
{
	delete elements;
}


template <typename E>
int LinkedStack<E>::size()
{
	return elements->size();
}


template <typename E>
bool LinkedStack<E>::is_empty()
{
	return elements->is_empty();
}


template <typename E>
void LinkedStack<E>::push(E element)
{
	elements->add_first(element);
}


template <typename E>
E LinkedStack<E>::top()
{
	return elements->first();
}


template <typename E>
E LinkedStack<E>::pop()
{
	return elements->remove_first();
}

#endif /* end of include guard: _LINKED_STACK_CPP_ */
