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

int main()
{
	cout << "Hello World!\n";
}