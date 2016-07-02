#ifndef _NODE_HPP_
#define _NODE_HPP_

/**
 * Nodo con referencia unidireccional.
 */
template <typename E>
class Node
{
private:

	/**
	* El elemento de este nodo.
	*/
	E element;

	/**
	 * El nodo siguiente.
	 */
	Node<E>* next;

public:
	/**
	 * Crea un nuevo  nodo con elemento "element".
	 */
	Node(E element);

	/**
	 * Crea un nuevo nodo con elemento "element" y nod siguiente "next".
	 */
	Node(E element, Node<E>* next);

	/**
	 * Retorna el elemento de este nodo.
	 * @return el elemento contenido en este nodo
	 */
	E get_element();

	/**
	 * Retorna el nodo siguiente a este nodo.
	 */
	Node<E>* get_next();

	/**
	 * Setea el nodo siguente al nodo "n".
	 * @param n el puntero al nodo siguiente
	 */
	void set_next(Node<E>* n);
};

#include "Node.cpp"

#endif /* end of include guard: _NODE_HPP_ */
