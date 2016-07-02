#include <iostream>
#include "ArrayStack.hpp"
#include "LinkedStack.hpp"

int main(int argc, char const *argv[])
{
	Stack<int>* s = new LinkedStack<int>();
	s->push(1);
	s->push(2);
	s->push(3);
	std::cout << s->top() << std::endl;
	s->pop();
	s->pop();
	s->pop();
	return 0;
}
