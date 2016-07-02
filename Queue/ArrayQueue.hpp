#ifndef _ARRAY_QUEUE_HPP_
#define _ARRAY_QUEUE_HPP_

#include <iostream>
#include "Queue.hpp"

template <typename E>
class ArrayQueue : public Queue<E>
{
private:
	int capacity = 0;
	int first_element = 0;
	E* elements = NULL;
	int current_size = 0;
public:
    static const int CAPACITY = 1000;
    static const int EMPTY_QUEUE_EXCEPTION = -1;
    static const int FULL_QUEUE_EXCEPTION = -2;

	ArrayQueue();
    ArrayQueue(int cap);
	~ArrayQueue();

	int size();
	bool is_empty();
	void enqueue(E element);
	E first();
	E dequeue();
};

#include "ArrayQueue.cpp"

#endif /* end of include guard: _ARRAY_QUEUE_HPP_ */
