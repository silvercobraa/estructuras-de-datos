#ifndef _LINKED_QUEUE_CPP_
#define _LINKED_QUEUE_CPP_

#include "LinkedQueue.hpp"

template <typename E>
LinkedQueue<E>::LinkedQueue()
{
	elements = new SingleLinkedList<E>();
}


template <typename E>
LinkedQueue<E>::~LinkedQueue()
{
	delete elements;
}


template <typename E>
int LinkedQueue<E>::size()
{
	return elements->size();
}


template <typename E>
bool LinkedQueue<E>::is_empty()
{
	return elements->is_empty();
}


template <typename E>
void LinkedQueue<E>::enqueue(E element)
{
	elements->add_first(element);
}


template <typename E>
E LinkedQueue<E>::first()
{
	return elements->first();
}


template <typename E>
E LinkedQueue<E>::dequeue()
{
	return elements->remove_first();
}

#endif /* end of include guard: _LINKED_QUEUE_CPP_ */
