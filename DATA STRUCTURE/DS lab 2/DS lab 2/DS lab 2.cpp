#include <iostream>
using namespace std;
class Node
{
public:
	int data;
	Node* previous;
	Node(int data) {
		this->data = data;
		previous = NULL;
	}
};
class Stack {

	Node* Top;
public:
	Stack()
	{
		Top = NULL;
	}
	void Push(int Data) {
		Node *node = new Node(Data);
		node->previous = Top;
		Top = node;
	}

	int peak() {
		return Top->data;
	}

	int pop(int &Data) {
		if (Top == NULL) {
			return false;
		}
		Node* node = Top;
		Data = Top->data;
		Top = Top->previous;
		delete node;
		return true;
	}
	
};
int main()
{
}
