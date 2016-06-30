#ifndef _STACK_
#define _STACK_

#include <string>

template <typename E>
class Stack
{
  public:
    /**
     * Destructor virtual con cuerpo vacío, para satisfacer las mañas de C++
     */
    virtual ~Stack() {};
	/**
	 * Retorna el número de elementos de esta pila.
	 * @return la cantidad de elementos de esta pila.
	 */
	virtual int size() = 0;

	/**
	 * Retorna si esta pila está vacía o no.
	 * @return booleano
	 */
	virtual bool is_empty() = 0;

	/**
	 * Retorna el elemento en la cima de la pila.
	 * @return objeto de tipo E
	 */
	virtual E top() = 0;

    /**
     * Inserta un elemento en la cima de esta pila.
     * @param element [El elemento a insertar]
     */
	virtual void push(E element) = 0;

    /**
     * Remueve el elemento en la cima de esta pila.
     * @return el elemento eliminado
     */
	virtual E pop() = 0;
};

#endif /* end of include guard: _STACK_ */
