#include <iostream>

#define MAX 1000

class Stack {
	int top;
public:
	int arr[MAX];

	Stack() { top = -1; }

	void push(int );
	int pop();
	int peek();
	bool isEmpty();

};

void Stack::push(int a) {
	if (top >=  (MAX - 1) )
	{
		std::cout << "Stack is over flow";
	}
	else
	{
		arr[++top] = a;
		std::cout << "pushed into the Stack : " << a << std::endl;
	}
}


int Stack::pop() {

	int x;
	if (isEmpty())
	{
		std::cout << "Stack is underflow";
		x = 0;
	}
	else
	{
		 x = arr[top--];
	}

	return x;
}



int Stack::peek() {

	int x;
	if (isEmpty())
	{
		std::cout << "Stack is empty";
		x = 0;
	}
	else
	{
		x = arr[top];
	}
	return x;
}

bool Stack::isEmpty() {
	return (top < 0);
}


int main() {

	Stack s;
	s.push(10);
	s.push(20);

	std::cout << "element is poped out: " << s.pop() << std::endl;
	std::cout << "element in the  top of the stack: " << s.peek();

	std::cout << "\n\n"; system("pause"); return 0;
}