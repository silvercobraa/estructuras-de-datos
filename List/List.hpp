#ifndef _LIST_HPP_
#define _LIST_HPP_

template <typename E>
class List
{
public:

    /**
     * Destructor virtual con cuerpo vacío, para satisfacer las mañas de C++
     */
    
    virtual ~List() {};
	/**
	 * Retorna el número de elementos de esta lista.
	 * @return la cantidad de elementos de esta lista.
	 */
	virtual int size() = 0;

	/**
	 * Retorna si esta lista está vacía o no.
	 * @return booleano
	 */
	virtual bool is_empty() = 0;

	/**
	 * Retorna el elemento en la posicion i-ésima.
	 * @param  i la posición del elemento que se desea obtener
     * @return   objeto de tipo E
	 */
	virtual E get(int i) = 0;

    /**
     * Reemplaza el elemento en la posición i por element.
     * @param  element el elemento nuevo
     * @param  i       la  posición donde insertar element
     * @return         el elemento antiguo
     */
    virtual E set(E element, int i) = 0;

   /**
    * Inserta un elemento en la posición i-ésima de esta lista.
    * @param element el elemento a insertar
    * @param i       la posición donde insertar element
    */
    virtual void add(E element, int i) = 0;

    /**
     * Remueve y retorna el primer elemento de esta lista.
     * @param  i la posicion del elemento que se desea eliminar
     * @return   el elemento eliminado
     */
	virtual E remove(int i) = 0;
};

#endif /* end of include guard: _LIST_HPP_ */
