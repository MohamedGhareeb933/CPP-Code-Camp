#include <iostream>
using namespace std;


class Node {
public:
	int data;
	Node* left;
	Node* right;
	Node(int data) {
		this->data = data;
		this->left = NULL;
		this->right = NULL;
	}
};

void print(Node* next, int space = 0, int t = 0) {
	int COUNT = 3;
	if (next == nullptr) { return; }

	space += COUNT;
	print(next->right, space, 1);

	for (int i = 0; i < space; i++)
	{
		std::cout << " ";
	}

	std::cout << next->data << std::endl;

	print(next->left, space, 2);

}

int main() {

	Node* next = new Node(1);
	next->left = new Node(2);
	next->right = new Node(3);
	next->left->left = new Node(4);
	next->left->right = new Node(5);
	next->right->left = new Node(6);
	next->right->right = new Node(7);



	print(next);

	std::cout << "\n\n"; system("pause");
	return 0;
}