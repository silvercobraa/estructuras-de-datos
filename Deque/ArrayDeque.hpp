#ifndef _ARRAY_DEQUE_HPP_
#define _ARRAY_DEQUE_HPP_

#include "Deque.hpp"

template <typename E>
class ArrayDeque : public Deque<E>
{
private:
	int capacity = 0;
	int first_element = 0;
	int last_element = 0;
	E* elements = NULL;
	int current_size = 0;

public:
	static const int CAPACITY = 1000;
	static const int EMPTY_DEQUE_EXCEPTION = -1;
	static const int FULL_DEQUE_EXCEPTION = -2;

	ArrayDeque();
    ArrayDeque(int cap);
	~ArrayDeque();

	int size();
	bool is_empty();
	E first();
	E last();
	void add_first(E element);
	void add_last(E element);
	E remove_first();
	E remove_last();
};

#include "ArrayDeque.cpp"

#endif /* end of include guard: _ARRAY_DEQUE_HPP_ */
