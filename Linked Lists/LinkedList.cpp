#include "LinkedList.h"

Node::Node(int data, Node* next) : data(data), next(next){}

LinkedList::LinkedList() : head(NULL), size(0){}

int LinkedList::length() const{
	return size;
}

bool LinkedList::empty() const{
	return size == 0;
}

void LinkedList::push(int data){
	if(!head){
		head = new Node(data);
	}
	else{
		Node* newHead = new Node(data, head);
		head = newHead;
	}
	size++;
}	

void LinkedList::pop(){
	Node* newHead = head->next;
	if(head){
		delete head;
		size--;
	}
	head = newHead;
}

Node* LinkedList::front(){
	return head;
}

LinkedList::~LinkedList(){
	while(head){
		Node* next = head->next;
		delete head;
		head = next;
	}
}