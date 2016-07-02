#ifndef _DOUBLY_LINKED_LIST_HPP_
#define _DOUBLY_LINKED_LIST_HPP_

#include "BiNode.hpp"

template <typename E>
class DoublyLinkedList
{
private:
	/**
	 * La cantidad de elementos actual en esta lista.
	 */
	int current_size;

	/**
	 * Nodo dummy al comienzo de la lista.
	 */
	BiNode<E>* header;

	/**
	 * Nodo dummy al final de la lista.
	 */
	BiNode<E>* trailer;

	static const int EMPTY_LIST_EXCEPTION = -1;

	/**
	 * Agrega un nodo entre predecessor successor.
	 * @param predecessor [description]
	 * @param successor   [description]
	 */
	void add_between(E element, BiNode<E>* predecessor, BiNode<E>* successor);

	/**
	 * Elimina el nodo node de esta lista.
	 * @param  node [description]
	 * @return      [description]
	 */
	E remove(BiNode<E>* node);

public:

	/**
	 * Crea una lista doblemente ligada vacía.
	 */
	DoublyLinkedList();
	~DoublyLinkedList();

	/**
	 * Retorna la cantidad de elementos en esta lista.
	 * @return
	 */
	int size();

	/**
	 * Retorna true si esta lista está vacía.
	 * @return
	 */
	bool is_empty();

	/**
	 * Retorna pero no remueve el primer elemento de la lista.
	 * @return
	 */
	E first();

	/**
	 * Retorna pero no remueve el último elemento de la lista.
	 * @return
	 */
	E last();

	/**
	 * Agrega un nodo con elemento "element" al comienzo de la lista.
	 * @param element
	 */
	void add_first(E element);

	/**
	 * Agrega un nuevo nodo con elemento "element" al final de la lista.
	 * @param element
	 */
	void add_last(E element);

	/**
	 * Remueve y retorna el primer elemento de la lista.
	 * @return
	 */
	E remove_first();

	/**
	 * Remueve y retorna el último elemento de la lista. MALO, HAY QUE CORREGIRLO.
	 * @return
	 */
	E remove_last();
};

#include "DoublyLinkedList.cpp"

#endif /* end of include guard: _DOUBLY_LINKED_LIST_HPP_ */
