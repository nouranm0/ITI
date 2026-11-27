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
	int GetDataByIndex(int index) {
		Node* current = head;
		int counter = 0;
		while (current != NULL) {
			if (counter == index) {
				return current->data;
			}
			current = current->next;
			counter++;
		}
		return -1;
	}
	//     حط 5 بعد ال 15 اللي عندك  
	// 	                  5           15 
	void InsertAfter(int Data, int afterData) {
		Node* After_node = GetNodeByData(afterData);
		if (After_node != NULL) {
			Node* New_node = new Node(Data);
			if(After_node->next !=NULL){
				Node* A = After_node;
				Node* B = After_node->next;
				A->next = New_node;
				B->previous = New_node;
				New_node->next = B;
				New_node->previous = A;
			}
			else {
				After_node->next = New_node;
				New_node->next = NULL;
				New_node->previous = After_node;
				tail = New_node;
			}
		}
		else {
			return;
		}
	}
	Linkedlist* Reverse() {
		Linkedlist* lst = new Linkedlist();
		Node* current = tail;
		if (head == NULL) {
			return NULL;
		}
		if (head == tail) {
			lst->Add(head->data);
			return lst;
		}
		while (current != head) {
			lst->Add(current->data);
			current = current->previous;
		}
		lst->Add(current->data);
		return lst;
	}

	void InplaceReverse() {
		Node* moveHEAD = head;
		Node* moveTAIL = tail;
		while (moveHEAD != moveTAIL && moveTAIL->next != moveHEAD) {
			int temp = moveHEAD->data;
			moveHEAD->data = moveTAIL->data;
			moveTAIL->data = temp;
			moveHEAD = moveHEAD->next;
			moveTAIL = moveTAIL->previous;
		}
	}
	void split(int data) {
		Node* current = GetNodeByData(data);
		Linkedlist* split_ = new Linkedlist();
		while (current != NULL) {
			split_->Add(current->data);
			current = current->next;
		}
		split_->DisplayAll();
	}

	void chunks() {
		Node* current = head;
		Linkedlist** lst = new Linkedlist*[10];
		int index = 0;
		int size = 3;
		while (current !=NULL) {
			lst[index] = new Linkedlist();
			for (size_t i = 0; i < 3; i++)
			{
				if (current != NULL) {
					lst[index]->Add(current->data);
					current = current->next;
				}
			}
			lst[index]->DisplayAll();
			cout << " ---------------- \n";
			index++;
		}
	}
};
int main()
{
	Linkedlist* lst = new Linkedlist();
	lst->Add(3);
	//lst->InsertAfter(66, 3);
	lst->Add(5);
	lst->Add(15);
	lst->Add(7);
	lst->Add(9);
	lst->Add(2);
	lst->Add(4);
	lst->chunks();
	//lst->DisplayAll();
	//lst->split(7);
	//lst->InplaceReverse();
	//lst->DisplayAll();
	//lst->Delete(7);
	/*
	Linkedlist* newlst = lst->Reverse();
	newlst->DisplayAll();
	cout <<"search = " << lst->Search(1)<<endl;
	lst->InsertAfter(66,5);
	lst->DisplayAll();
	cout<<lst->GetDataByIndex(2);
	*/
}