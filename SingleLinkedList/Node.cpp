#ifndef _NODE_CPP_
#define _NODE_CPP_

#include "Node.hpp"

template <typename E>
Node<E>::Node(E element)
{
	this->element = element;
	this->next = NULL;
}


template <typename E>
Node<E>::Node(E element, Node<E>* next)
{
	this->element = element;
	this->next = next;
}


template <typename E>
E Node<E>::get_element()
{
	return this->element;
}


template <typename E>
Node<E>* Node<E>::get_next()
{
	return this->next;
}


template <typename E>
void Node<E>::set_next(Node<E>* n)
{
	next = n;
}

#endif /* end of include guard: _NODE_CPP_ */
