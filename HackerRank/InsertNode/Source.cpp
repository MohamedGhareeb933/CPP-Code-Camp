#include <iostream>


class SinglyLinkedListNode{

public:
	SinglyLinkedListNode(int data) {
		this->data = data;
	}

	int data;
	SinglyLinkedListNode* next;
 };

SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head) {

	SinglyLinkedListNode* temp = new SinglyLinkedListNode(6);

	if (!head)
		return temp;


	SinglyLinkedListNode* current = head;

	while (current->next)
		current = current->next;

	current->next = temp;

	return head;
}

int main() {

	SinglyLinkedListNode* head = new SinglyLinkedListNode(6);

	
	std::cout << insertNodeAtTail(head);


	std::cin.get();
}