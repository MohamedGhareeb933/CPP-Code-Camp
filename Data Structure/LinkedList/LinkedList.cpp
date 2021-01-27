#include <iostream>

class Node {
public:
	int data;
	Node *next;
};

void printList(Node *n) {
	
	while (n != NULL)
	{
		std::cout << n->data << " ";
		n = n->next; // for example first = first->(next = second). and so on .
	}
}

int main() {

	Node *first = new Node();
	Node *second = new Node();
	Node *third = new Node();

	//Data of the First node is equal to 1 and Next Object is equal to Second Node.
	first->data = 1;
	first->next = second;

	//Data of the second node is equal to 2 and Next Object is equal to third Node.
	second->data = 3;
	second->next = third;

	//Data of the third node is equal to 3 and Next Object is equal to Null.
	third->data = 3;
	third->next = NULL;

	printList(first);

	std::cout << "\n\n";  system("pause"); return 0;
}