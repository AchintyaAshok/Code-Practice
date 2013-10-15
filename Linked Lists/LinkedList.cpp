#include "LinkedList.h"
#include <cstdlib>
#include <iostream>

Node::Node(int data, Node* next) : data(data), next(next){}

LinkedList::LinkedList() : head(NULL), tail(NULL), size(0){}

int LinkedList::length() const{
	return size;
}

bool LinkedList::empty() const{
	return size == 0;
}

void LinkedList::push(int data){
	if(!head){
		head = tail = new Node(data);
	}
	else{
		Node* newHead = new Node(data, head);
		head = newHead;
	}
	size++;
}	

void LinkedList::pop_back(){
	Node* newHead = head->next;
	if(head){
		delete head;
		head = NULL; // if the tail was this element, it now is de-allocated and must be set to NULL
		size--;
	}
	head = newHead;
}

void LinkedList::pop_front(){
	if(!head) return;

	if(head == tail){
		delete tail;
		head = tail = NULL;
	}
	else{
	// find the element before the tail, so that we can set the tail to this afterwards.
		Node* prev = head;
		while(prev->next != tail){
			prev = prev->next;
		}
		// now we have the element before the tail, let's delete the tail and then set it to this node.
		delete tail;
		tail = NULL;
		tail = prev;
	}
	size--;
}

Node* LinkedList::back(){
	return head;
}

Node* LinkedList::front(){
	return tail;
}

LinkedList::~LinkedList(){
	while(head){
		Node* next = head->next;
		delete head;
		head = NULL; // in case there is any outside reference to pointers to nodes, prevent the pointer from pointing at de-allocated memory.
		head = next;
	}
}