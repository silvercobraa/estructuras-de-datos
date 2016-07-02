#ifndef _DEQUE_HPP_
#define _DEQUE_HPP_

template <typename E>
class Deque
{
public:
    /**
     * Destructor virtual con cuerpo vacío, para satisfacer las mañas de C++
     */
    virtual ~Deque() {};
	/**
	 * Retorna el número de elementos de esta deque.
	 * @return la cantidad de elementos de esta deque.
	 */
	virtual int size() = 0;

	/**
	 * Retorna si esta deque está vacía o no.
	 * @return booleano
	 */
	virtual bool is_empty() = 0;

	/**
	 * Retorna el primer elemento de la deque.
	 * @return objeto de tipo E
	 */
	virtual E first() = 0;

    /**
     * Retorna el ultimo elemneto de esta deque.
     * @return [description]
     */
    virtual E last() = 0;

    /**
    * Inserta un elemento al comienzo de esta deque.
    * @param element [description]
    */
    virtual void add_first(E element) = 0;

    /**
     * Inserta un elemento al final de esta deque.
     * @param element [El elemento a insertar]
     */
	virtual void add_last(E element) = 0;

    /**
     * Remueve y retorna el primer elemento de esta deque.
     * @return el elemento eliminado
     */
	virtual E remove_first() = 0;

    /**
     * Remueve y retorna el primer elemento de esta deque.
     * @return el elemento eliminado
     */
	virtual E remove_last() = 0;
};

#endif /* end of include guard: _DEQUE_HPP_ */
