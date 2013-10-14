#ifndef LINKED_LIST
#define LINKED_LIST

#include <cstdlib>

struct Node{
	// Constructor
	Node(int data, Node* next = NULL);

	int data;
	Node* next;
};


class LinkedList{

public:
	LinkedList();

	int length() const;

	bool empty() const;
	/* push a Node into the linked list, it will add it to the end of the list */
	void push(int data);
	/* pop the front most(the head) node from the linked list */
	void pop();
	/* returns the Node element at the head of the linked list */
	Node* front();

	~LinkedList();

private:
	Node* head;
	Node* tail;
	int size;

};

#endif