#ifndef _QUEUE_
#define _QUEUE_

#include <string>

template <typename E>
class Queue
{
public:
    /**
     * Destructor virtual con cuerpo vacío, para satisfacer las mañas de C++
     */
    virtual ~Queue() {};
	/**
	 * Retorna el número de elementos de esta cola.
	 * @return la cantidad de elementos de esta cola.
	 */
	virtual int size() = 0;

	/**
	 * Retorna si esta cola está vacía o no.
	 * @return booleano
	 */
	virtual bool is_empty() = 0;

	/**
	 * Retorna el primer elemento de la cola.
	 * @return objeto de tipo E
	 */
	virtual E first() = 0;

    /**
     * Inserta un elemento al final de esta cola.
     * @param element [El elemento a insertar]
     */
	virtual void enqueue(E element) = 0;

    /**
     * Remueve y retorna el primer elemento de esta cola.
     * @return el elemento eliminado
     */
	virtual E dequeue() = 0;
};

#endif /* end of include guard: _QUEUE_ */
