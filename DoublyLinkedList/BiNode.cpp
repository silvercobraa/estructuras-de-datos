#ifndef _BI_NODE_CPP_
#define _BI_NODE_CPP_

#include "BiNode.cpp"

template <typename E>
BiNode<E>::BiNode(E element)
{
	this->element = element;
	this->previous = NULL;
	this->next = NULL;
}

template <typename E>
BiNode<E>::BiNode(E element, BiNode<E>* next)
{
	this->element = element;
	this->next = next;
	this->previous = NULL;
}

template <typename E>
BiNode<E>::BiNode(E element, BiNode<E>* previous, BiNode<E>* next)
{
	this->element = element;
	this->next = next;
	this->previous = previous;
}


template <typename E>
E BiNode<E>::get_element()
{
	return this->element;
}


template <typename E>
BiNode<E>* BiNode<E>::get_prev()
{
	return this->previous;
}


template <typename E>
BiNode<E>* BiNode<E>::get_next()
{
	return this->next;
}


template <typename E>
void BiNode<E>::set_prev(BiNode<E>* p)
{
	previous = p;
}


template <typename E>
void BiNode<E>::set_next(BiNode<E>* n)
{
	next = n;
}


#endif /* end of include guard: _BI_NODE_CPP_ */
