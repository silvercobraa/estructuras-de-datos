#include <iostream>
#include "Node.hpp"
#include "SingleLinkedList.hpp"
#include "DoublyLinkedList.hpp"
#include "BiNode.hpp"

int main(int argc, char const *argv[])
{
	Node<int>* n = new Node<int>(4);
	SingleLinkedList<int>* sll = new SingleLinkedList<int>();
	sll->add_last(3);
	sll->add_first(2);
	sll->remove_first();
	BiNode<int>* bn = new BiNode<int>(4);
	DoublyLinkedList<int>* dll = new DoublyLinkedList<int>();
	delete sll;
	delete n;
	delete bn;	
	delete dll;
	return 0;
}
