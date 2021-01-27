#include <iostream>

class Queue 
{
public:
	int front, rear, size;
	unsigned capacity;
	int* Arr;
};

Queue* QueueHandler(unsigned cap) 
{
	Queue* queue = new Queue();
	queue->capacity = cap;
	queue->front = queue->size = 0;
	queue->rear = queue->capacity - 1;
	queue->Arr = new int[queue->capacity * sizeof(int)];
	return queue;
}

bool isEmpty(Queue* queue) 
{
	return (queue->size < 0);
}

bool isFull(Queue* queue) 
{
	return (queue->size == queue->capacity);
}

void enqueue(Queue* queue, int item) 
{
	if (isFull(queue)) { return; }
	// enque from the rear and increase rear.
	queue->rear = (queue->rear + 1) % queue->capacity;
	queue->Arr[queue->rear] = item;
	queue->size = queue->size +  1;

	std::cout << "Equeueing: " << item << std::endl;
}


int dequeue(Queue* queue) 
{
	if (isEmpty(queue)) { return INT_MIN; }

	int item = queue->Arr[queue->front];
	queue->front = (queue->front + 1) % queue->capacity;
	queue->size = queue->size - 1;
	return item;
}

int front(Queue* queue) {
	if (!isEmpty(queue)) 
	{
		return queue->Arr[queue->front];
	}
}

int rear(Queue* queue) {
	if (!isEmpty(queue))
	{
		return queue->Arr[queue->rear];
	}
}


int main() 
{
	Queue* queue = QueueHandler(1000);

	enqueue(queue, 10);
	enqueue(queue, 20);
	enqueue(queue, 30);
	enqueue(queue, 40);
	enqueue(queue, 50);

	std::cout << "dqueueing: " << dequeue(queue) << std::endl;

	std::cout << "front is: " << front(queue) << std::endl;
	std::cout << "rear is: " << rear(queue) << std::endl;

	std::cout << "\n\n";	system("pause");
	return 0;
}