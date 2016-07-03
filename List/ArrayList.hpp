#ifndef _ARRAY_LIST_HPP_
#define _ARRAY_LIST_HPP_

#include "List.hpp"

template <typename E>
class ArrayList : public List<E>
{
private:
	int capacity = 0;
	int current_size = 0;
	E* elements = NULL;

	/**
	 * Lanza INDEX_OUT_OF_BOUNDS_EXCEPTION si i es mayor o igual que n, o si es
	 * menor que cero.
	 * @param i un entero
	 */
	void check_index(int i, int n);

public:
	static const int CAPACITY = 1000;
	static const int INDEX_OUT_OF_BOUNDS_EXCEPTION = -1;
	static const int FULL_LIST_EXCEPTION = -2;

    ArrayList();
    ArrayList(int cap);
    ~ArrayList();

	int size();
	bool is_empty();
	E get(int i);
    E set(E element, int i);
    void add(E element, int i);
	E remove(int i);
};

#include "ArrayList.cpp"

#endif /* end of include guard: _ARRAY_LIST_HPP_ */
