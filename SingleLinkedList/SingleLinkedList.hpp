#ifndef _SINGLE_LINKED_LIST_HPP_
#define _SINGLE_LINKED_LIST_HPP_

#include "Node.hpp"

/**
 * Lista ligada simple. Cada nodo contiene referencias al nodo siguiente.
 */
template <typename E>
class SingleLinkedList
{
	private:

	/**
	 * La cantidad de elementos actual en esta lista.
	 */
	int current_size;

	/**
	 * El primer nodo de la lista.
	 */
	Node<E>* head;

	/**
	 * El último nodo de la lista.
	 */
	Node<E>* tail;

	static const int EMPTY_LIST_EXCEPTION = -1;
public:

	/**
	 * Crea una lista ligada simple vacía.
	 */
	SingleLinkedList();

	~SingleLinkedList();

	/**
	 * Retorna la cantidad de elementos en esta lista.
	 * @return la cantidad de elementos en esta lista.
	 */
	int size();

	/**
	 * Retorna true si esta lista está vacía.
	 * @return true o false
	 */
	bool is_empty();

	/**
	 * Retorna pero no remueve el primer elemento de la lista.
	 * @return
	 */
	E first();

	/**
	 * Retorna pero no remueve el último elemento de la lista.
	 * @return el último elemento de la lista.
	 */
	E last();

	/**
	 * Agrega un nodo con elemento "element" al comienzo de la lista.
	 * @param element el elemento a insertar
	 */
	void add_first(E element);

	/**
	 * Agrega un nuevo nodo con elemento "element" al final de la lista.
	 * @param element el elemento a insertar
	 */
	void add_last(E element);

	/**
	 * Remueve y retorna el primer elemento de la lista.
	 * @return el elemento removido
	 */
	E remove_first();
};

#include "SingleLinkedList.cpp"

#endif /* end of include guard: _SINGLE_LINKED_LIST_HPP_ */
