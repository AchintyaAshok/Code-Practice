#ifndef LINKED_LIST
#define LINKED_LIST

#include <cstdlib>

struct Node{
	// Constructor
	Node(int data, Node* next = NULL);

	int data;
	Node* next;
};

/* A simple representation of a Singly-Linked List */
class LinkedList{
public:
	// CONSTRUCTOR
	LinkedList();

	/* returns the number of elements present in this linked list. */
	int length() const;
	/* returns whether or not the linked list is empty */
	bool empty() const;
	/* push a value into the back of the linked list */
	void push_back(int data);
	/* push a value into the front of the linked list */
	void push_front(int data);
	/* pop the front most(the head) node from the linked list */
	void pop_back();
	/* pop_front removes nodes in the same order that they were inserted, it removes a node from the tail of the linked list */
	void pop_front();
	/* returns the Node element at the head of the linked list */
	Node* back();
	/* returns a pointer to the Node element at the tail of the linked list */
	Node* front();

	// DESTRUCTOR
	~LinkedList();

private:
	Node* head;
	Node* tail;
	int size;
};

#endif