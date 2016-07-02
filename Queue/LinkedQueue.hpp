#ifndef _LINKED_QUEUE_HPP_
#define _LINKED_QUEUE_HPP_

#include "Queue.hpp"
#include "../SingleLinkedList/SingleLinkedList.hpp"

template <typename E>
class LinkedQueue : public Queue<E>
{
private:
	SingleLinkedList<E>* elements;
	
	static const int EMPTY_QUEUE_EXCEPTION = -1;
public:
	LinkedQueue();
	~LinkedQueue();
	int size();
	bool is_empty();
	void enqueue(E element);
	E first();
	E dequeue();
};
#include "LinkedQueue.cpp"

#endif /* end of include guard: _LINKED_QUEUE_HPP_ */
