#include <iostream>
#include "ArrayDeque.hpp"
//#include "LinkedDeque.hpp"

void print(Deque<int>* d)
{
	std::cout << "size: " << d->size() << " ";
	std::cout << "is empty: " << d->is_empty() << " ";
	if (!d->is_empty())
	{
		std::cout << "first: " << d->first() << " ";
		std::cout << "last: " << d->last() << std::endl;
	}
}
int main(int argc, char const *argv[])
{
	Deque<int>* d = new ArrayDeque<int>();
	d->add_first(1);
	print(d);
	d->add_first(2);
	print(d);
	d->add_first(3);
	print(d);
	d->add_last(1);
	print(d);
	d->add_last(2);
	print(d);
	d->add_last(3);
	print(d);
	d->remove_first();
	print(d);
	d->remove_last();
	print(d);
	d->remove_first();
	print(d);
	d->remove_last();
	print(d);
	d->remove_first();
	print(d);
	d->remove_last();
	print(d);
	return 0;
}
