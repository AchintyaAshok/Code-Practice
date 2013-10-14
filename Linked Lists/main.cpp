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

	printf("Let's pop all our elements:\n");
	while(!ll.empty()){
		printf("Popping -> %d\n", ll.front()->data);
		ll.pop();
	}

	return 0;
}