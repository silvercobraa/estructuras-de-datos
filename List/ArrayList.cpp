#ifndef _ARRAY_LIST_CPP_
#define _ARRAY_LIST_CPP_

#include "ArrayList.hpp"

template <typename E>
ArrayList<E>::ArrayList()
{
    this->capacity = CAPACITY;
    this->elements = new E[CAPACITY];
}


template <typename E>
ArrayList<E>::ArrayList(int cap)
{
    this->capacity = cap;
    this->elements = new E[cap];
}


template <typename E>
ArrayList<E>::~ArrayList()
{
    delete elements;
}


template <typename E>
int ArrayList<E>::size()
{
    return current_size;
}


template <typename E>
bool ArrayList<E>::is_empty()
{
    return current_size == 0;
}


template <typename E>
E ArrayList<E>::get(int i)
{
    check_index(i, current_size);
    return elements[i];
}


template <typename E>
E ArrayList<E>::set(E element, int i)
{
    check_index(i, current_size);
    E aux = elements[i];
    elements[i] = element;
    return aux;
}


template <typename E>
void ArrayList<E>::add(E element, int i)
{
    if (current_size == capacity)
    {
        throw FULL_LIST_EXCEPTION;
    }
    // +1 porque asi se incluye a la posición siguente de la del último
    // elemento de la lista.
    check_index(i, current_size + 1);
    for (int j = current_size - 1; j >= i; j--)
    {
        elements[j+1] = elements[j];
    }
    elements[i] = element;
    current_size++;
}


template <typename E>
E ArrayList<E>::remove(int i)
{
    check_index(i, current_size);
    E aux = elements[i];
    for (int j = i + 1; j < current_size; j++)
    {
        elements[j - 1] = elements[j];
    }
    current_size--;
    return aux;
}

template <typename E>
void ArrayList<E>::check_index(int i, int n)
{
    if (i < 0 || i >= n)
    {
        throw INDEX_OUT_OF_BOUNDS_EXCEPTION;
    }
}

#endif /* end of include guard: _ARRAY_LIST_CPP_ */
