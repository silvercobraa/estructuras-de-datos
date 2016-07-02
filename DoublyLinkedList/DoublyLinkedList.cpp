#ifndef _DOUBLY_LINKED_LIST_CPP_
#define _DOUBLY_LINKED_LIST_CPP_

#include "DoublyLinkedList.hpp"

template <typename E>
DoublyLinkedList<E>::DoublyLinkedList()
{
	this->current_size = 0;
	header = new BiNode<E>((E)0, trailer, NULL);
	trailer = new BiNode<E>((E)0, NULL, NULL);
	trailer->set_prev(header);
}


template <typename E>
DoublyLinkedList<E>::~DoublyLinkedList()
{
	while (!is_empty())
	{
		remove_first();
	}
}


template <typename E>
int DoublyLinkedList<E>::size()
{
	return this->current_size;
}


template <typename E>
bool DoublyLinkedList<E>::is_empty()
{
	return current_size == 0;
}


template <typename E>
E DoublyLinkedList<E>::first()
{
	if (this->is_empty())
	{
		throw EMPTY_LIST_EXCEPTION;
	}

	return header->get_next()->get_element();
}


template <typename E>
E DoublyLinkedList<E>::last()
{
	if (this->is_empty())
	{
		throw EMPTY_LIST_EXCEPTION;
	}

	return trailer->get_prev()->get_element();
}


template <typename E>
void DoublyLinkedList<E>::add_first(E element)
{
	// esto está mal porque no actualiza los punteros de los nodos vecinos
	//trailer->set_next(new BiNode<E>(element, trailer, trailer->get_next()));
	add_between(element, header, header->get_next());
}


template <typename E>
void DoublyLinkedList<E>::add_last(E element)
{
	add_between(element, trailer->get_prev(), trailer);
}


template <typename E>
E DoublyLinkedList<E>::remove_first()
{
	if (is_empty())
	{
		throw EMPTY_LIST_EXCEPTION;
	}

	return remove(header->get_next());
}


template <typename E>
E DoublyLinkedList<E>::remove_last()
{
	if (is_empty())
	{
		throw EMPTY_LIST_EXCEPTION;
	}

	return remove(trailer->get_prev());
}

template <typename E>
void DoublyLinkedList<E>::add_between(E element, BiNode<E>* predecessor, BiNode<E>* successor)
{
	BiNode<E>* new_node = new BiNode<E>(element, predecessor, successor);
	predecessor->set_next(new_node);
	successor->set_prev(new_node);
	current_size++;
}

template <typename E>
E DoublyLinkedList<E>::remove(BiNode<E>* node)
{
	E removed_element = node->get_element();
	BiNode<E>* predecessor = node->get_prev();
	BiNode<E>* successor = node->get_next();
	predecessor->set_next(successor);
	successor->set_next(predecessor);
	current_size--;
	delete node;
	return removed_element;
}

#endif /* end of include guard: _DOUBLY_LINKED_LIST_CPP_ */
