#ifndef _LINKED_STACK_HPP_
#define _LINKED_STACK_HPP_

#include "../SingleLinkedList/SingleLinkedList.hpp"

template <typename E>
class LinkedStack : public Stack<E>
{
private:
	SingleLinkedList<E>* elements;

	static const int EMPTY_STACK_EXCEPTION = -1;
public:
	LinkedStack();
	~LinkedStack();
	int size();
	bool is_empty();
	void push(E element);
	E top();
	E pop();
};
#include "LinkedStack.cpp"

#endif /* end of include guard: _LINKED_STACK_HPP_ */
