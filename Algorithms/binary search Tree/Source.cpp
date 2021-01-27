#include <iostream>

class Node {
public:
	int data;
	Node* left;
	Node* right;
	Node(int data) {
		this->data = data;
		left = NULL;
		right = NULL;
	}
};

Node search(Node *next, int data) {
	if (next == NULL)
	{
		std::cout << "Element Not found \n";
		return NULL;
	}
	if (next->data = data)
	{
		std::cout << "found Element at Address" << next << std::endl;
		return *next;
	}
	if (data > next->data)
	{
		search(next->right, data);
	}
	else if (data <= next->data)
	{
		search(next->right, data);
	}
	


}

void insert(Node* next, int data) {
	if (next == NULL)
	{
		next = new Node(data);
	}
	else if (data <= next->data)
	{
		if (next->left != NULL)
		{
			insert(next->left, data);
		}
		else
		{
			next->left = new Node(data);
		}
	} else 
	{
		if (next->right != NULL)
		{
			insert(next->right, data);
		}
		else
		{
			next->right = new Node(data);
		}
	}
	
}

int main() {
	Node* next = new Node(5);
	insert(next, 1);
	insert(next, 5);
	insert(next, 9);
	insert(next, 6);
	insert(next, 132);
	insert(next, 7);
	insert(next, 73);

	search(next, 7);


	std::cout << "\n\n";	system("pause");
	return 0;

}