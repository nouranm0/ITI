#include <iostream>
using namespace std;
class Node
{ public:
	int data;
	Node* Next;
	Node(int data) {
		this->data = data;
		Next = NULL;
	}     
};
class Queue_aslinkedlist {
	Node* front;
	Node* rear;
public:
	Queue_aslinkedlist()
	{
		front = rear = NULL;
	}
	void Enqueue(int Data){
		Node* node = new Node(Data);
		if (front == NULL) {
			front = rear = node;
		}
		else {
			rear->Next = node;
			rear = node;
		}
	}
	int Dequeue(int& Data) {
		if (front == NULL) return false;
		Node* ptr = front;
		if (front == rear) {
			Data = front->data;
			front = rear = NULL;
		}
		else {
			Data = front->data;
			front =front->Next;
		}
		delete ptr;
		return true;
	}
	void Display() {
		for (Node* i = front;i != NULL;) {
			cout << i->data << " ";
			i = i->Next;
		}
		cout << endl;
	}
};

//////////////////////////////////////////////////////////////////////////////////////
class QueueArray_SHIFT {
	int* arr;
	int size;
	int front;
	int rear;
public:
	QueueArray_SHIFT()
	{
		front = rear = -1;
		size = 5;
		arr = new int[size];
	}
	
	void shift() {
		int i;
		for (i = 0;front != rear+1;i++) {
			arr[i] = arr[front];
			front++;
		}
		front = 0;
		rear = i-1;
	}
	int Enqueue(int Data) {
		if (rear == size-1 && front == 0) return false;
		if (front == -1) {
			front++;
			arr[front] = Data;
			rear++;
		}
		else {
			if (front != 0)shift();
				rear++;
				arr[rear] = Data;
		}
		return true;
	}
	int Dequeue(int& Data) {
		if (front == -1) return false;
		if (front == rear) {
			Data = arr[front];
			front = rear = -1;
		}
		else {
			Data = arr[front];
			front++;
		}
		return true;
	}
	void display() {
		for (int i = front;i <= rear;i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
		cout << "front = " << front << " rear = " << rear << endl;
	}
};


int main()
{
	/*Queue_aslinkedlist* queue = new Queue_aslinkedlist();
	queue->Enqueue(1);
	queue->Enqueue(2);
	queue->Enqueue(3);
	queue->Enqueue(4);
	queue->Enqueue(5);
	queue->Display();
	int x;
	queue->Dequeue(x);
	queue->Display();
	queue->Enqueue(6);
	queue->Display();*/


	QueueArray_SHIFT *q = new QueueArray_SHIFT();
	q->Enqueue(1);
	q->Enqueue(2);
	q->Enqueue(3);
	q->Enqueue(4);
	q->Enqueue(5);
	q->display();
	int x;
	q->Dequeue(x);
	q->display();
	q->Enqueue(6);
	q->display();
	q->Enqueue(1);
	q->Enqueue(2);
	q->display();
	q->Dequeue(x);
	q->Dequeue(x);
	q->display();
	q->Enqueue(11);
	q->display();

}