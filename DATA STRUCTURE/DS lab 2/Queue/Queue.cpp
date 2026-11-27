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
class Queue {
	Node* front;
	Node* rear;
	Queue()
	{
		front = rear = NULL;
	}
	void Enqueue(int Data){
		Node* node = new Node(Data);
		if (front == NULL) {
			front = rear = node;
		}
		else {
			rear->Next = node ;
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
};
class QueueArray {
	int* arr;
	int size;
	int front;
	int rear;
	QueueArray()
	{
		front = rear = -1;
		size = 5;
		arr = new int[size];
	}
	void Enqueue(int Data) {
		if (front == -1) {
			front++;
			arr[front] = Data;
			rear++;
		}
		else {
			rear++;
			arr[rear] = Data;
		}
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
};


int main()
{}