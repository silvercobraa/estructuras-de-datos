#ifndef _SINGLE_LINKED_LIST_CPP_
#define _SINGLE_LINKED_LIST_CPP_

#include "SingleLinkedList.hpp"

template <typename E>
SingleLinkedList<E>::SingleLinkedList()
{
	this->current_size = 0;
	head = NULL;
	tail = NULL;
}

template <typename E>
SingleLinkedList<E>::~SingleLinkedList()
{
	while (!is_empty()) {
		this->remove_first();
	}
}


template <typename E>
int SingleLinkedList<E>::size()
{
	return this->current_size;
}


template <typename E>
bool SingleLinkedList<E>::is_empty()
{
	return current_size == 0;
}


template <typename E>
E SingleLinkedList<E>::first()
{
	if (this->is_empty())
	{
		throw EMPTY_LIST_EXCEPTION;
	}
	return head->get_element();
}


template <typename E>
E SingleLinkedList<E>::last()
{
	if (this->is_empty())
	{
		throw EMPTY_LIST_EXCEPTION;
	}
	return tail->get_element();
}


template <typename E>
void SingleLinkedList<E>::add_first(E element)
{
	head = new Node<E>(element, head);
	if (current_size == 0)
	{
		tail = head;
	}
	current_size++;
}


template <typename E>
void SingleLinkedList<E>::add_last(E element)
{
	if (this->is_empty())
	{
		tail = new Node<E>(element);
		head = tail;
	}
	else
	{
		tail->set_next(new Node<E>(element));
		tail = tail->get_next();
	}
	current_size++;
}


template <typename E>
E SingleLinkedList<E>::remove_first()
{
	if (is_empty())
	{
		throw EMPTY_LIST_EXCEPTION;
	}
	Node<E>* nodo_auxiliar = head;
	E removed_element = nodo_auxiliar->get_element();
	head = head->get_next();
	current_size--;
	delete nodo_auxiliar;
	return removed_element;
}

#endif /* end of include guard: _SINGLE_LINKED_LIST_CPP_ */
