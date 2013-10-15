#include "LinkedList.h"

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main(){

	LinkedList ll;
	printf("Size of ll before -> %d\n", ll.length());

	for(int i=0; i<5; i++){
		ll.push(i);
	}

	printf("length of ll after -> %d\n", ll.length());

	printf("Let's pop all our elements (like a stack):\n");
	while(!ll.empty()){
		printf("Popping -> %d\n", ll.back()->data);
		ll.pop_back();
	}

	printf("Let's add all the same elements again...\n");
	for(int i=0; i<5; i++){
		ll.push(i);
	}
	printf("Let's pop all our elements (like a queue):\n");
	while(!ll.empty()){
		printf("Popping -> %d\n", ll.front()->data);
		ll.pop_front();
	}

	return 0;
}