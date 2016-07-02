#ifndef _BI_NODE_HPP_
#define _BI_NODE_HPP_

template <typename E>
class BiNode
{
private:
	/**
	 * El elemento de este nodo.
	 */
	E element;

	/**
	 * El nodo anterior.
	 */
	BiNode<E>* previous;

	/**
	 * El nodo siguiente.
	 */
	BiNode<E>* next;

public:
	/**
	 * Crea un nuevo nodo con elemento "element".
	 * @param element
	 */
	BiNode(E element);

	/**
	 * Crea un nuevo nodo con elemento "element" y nodo siguiente "next".
	 * @param element
	 * @param next
	 */
	BiNode(E element, BiNode<E>* next);

	/**
	 * Crea un nuevo nodo con elemento "element", nodo anterior "previous" y nodo
	 * siguiente "next"
	 * @param element
	 * @param previous
	 * @param next
	 */
	BiNode(E element, BiNode<E>* previous, BiNode<E>* next);

	/**
	 * Retorna el elemento en este nodo.
	 * @return
	 */
	E get_element();

	/**
	 * Retorna el nodo anterior a este nodo.
	 * @return
	 */
	BiNode<E>* get_prev();

	/**
	 * Retorna el nodo siguiente a este nodo.
	 * @return
	 */
	BiNode<E>* get_next();

	/**
	 * Setea el nodo anterior al nodo "p".
	 * @param p
	 */
	void set_prev(BiNode<E>* p);

	/**
	 * Setea el nodo siguiente al nodo "n".
	 * @param n
	 */
	void set_next(BiNode<E>* n);
};

#include "BiNode.cpp"

#endif /* end of include guard: _BI_NODE_HPP_ */
