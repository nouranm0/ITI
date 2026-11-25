#include <iostream>
using namespace std;
class Node
{
public:
	int data;
	Node* next, * previous;
	Node(int data) {
		this->data = data;
		next = previous = NULL;
	}
};
class Linkedlist
{
	Node* head, * tail;
public:
	Linkedlist() {
		head = tail = NULL;
	}

	void Add(int Data) {
		Node* node = new Node(Data);
		if (head == NULL) {
			head = tail= node;
		}
		else {
			node->previous = tail;
			tail->next = node;
			tail = node;
		}
	}
	void DisplayAll() {
		Node* current = head;
		while (current !=NULL) {
			cout << current->data << endl;
			current = current->next;
		}
	}
	Node* GetNodeByData(int Data) {
		Node* current = head;
		while (current != NULL) {
			if (current->data == Data) {
				return current;
			}
			current = current->next;
		}
		return NULL;
	}
	int Search(int Data) {
		return GetNodeByData(Data) != NULL;
	}
	void Delete(int Data) {
		Node* node = GetNodeByData(Data);
		if (node == NULL)
			return;
		if (head == node) {
			if(head == tail){
				head = tail = NULL;
			}
			else {
				head = node->next;
				head->previous = NULL;
			}
		}
		else if(tail == node){
			tail = node->previous;
			tail->next = NULL;
		}
		else {
			Node* A = node->previous;
			Node* B = node->next;
			A->next = B;
			B->previous = A;
		}
		delete node;
	}


};
int main()
{
	cout << "Hello World!\n";
}