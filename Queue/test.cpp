#include <iostream>
#include "ArrayQueue.hpp"
#include "LinkedQueue.hpp"

int main(int argc, char const *argv[])
{
	Queue<int>* s = new ArrayQueue<int>();
	s->enqueue(1);
	s->enqueue(2);
	s->enqueue(3);
	std::cout << s->first() << std::endl;
	std::cout << s->is_empty() << std::endl;
	std::cout << s->size() << std::endl;
	s->dequeue();
	s->dequeue();
	s->dequeue();
	return 0;
}
