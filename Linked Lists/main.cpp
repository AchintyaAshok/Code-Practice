#include "LinkedList.h"
#include "linkedListProblems.h"

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;



int main(){
	// TESTING OUT PROBLEM 3 -- ADDING NUMBERS REP. BY LLs
	LinkedList leftAddend;
	LinkedList rightAddend;
	LinkedList sum;
	leftAddend.push_back(6);
	leftAddend.push_back(1);
	leftAddend.push_back(7); // left now is 7 -> 1 -> 6 or in actual form, 617
	rightAddend.push_back(2);
	rightAddend.push_back(9);
	rightAddend.push_back(5); // right now is 5 -> 9 -> 2 or in actual form, 295
	// now let's compute the sum:
	add_linkedlist_numbers(leftAddend, rightAddend, sum);
	// now let's check if we got the correct sum:
	while(!sum.empty()){
		cout << sum.front();
		sum.pop_front();
	}
	cout << endl;

	return 0;
}


// int main(){
// 	// TESTING OUT PROBLEM 1 -- REMOVAL OF DUPLICATES
// 	LinkedList myList;
// 	for(int i=0; i<5; i++){
// 		myList.push_back(i);
// 		myList.push_back(i);
// 	}
// 	printf("Our Current Linked List has %d elements. Now we shall remove duplicates:\n", myList.length());
// 	remove_duplicates(myList);
// 	printf("Let's iterate through all the elements in our linked list ->\n");
// 	while(!myList.empty()){
// 		printf("%d ", myList.back()->data);
// 		myList.pop_back();
// 	}
// 	cout << endl << endl;
// 	return 0;
// }

// int main(){
// 	// TESTING OUT OUR LINKED LIST
// 	LinkedList ll;
// 	printf("Size of ll before -> %d\n", ll.length());

// 	for(int i=0; i<5; i++){
// 		ll.push(i);
// 	}

// 	printf("length of ll after -> %d\n", ll.length());

// 	printf("Let's pop all our elements (like a stack):\n");
// 	while(!ll.empty()){
// 		printf("Popping -> %d\n", ll.back()->data);
// 		ll.pop_back();
// 	}

// 	printf("Let's add all the same elements again...\n");
// 	for(int i=0; i<5; i++){
// 		ll.push(i);
// 	}
// 	printf("Let's pop all our elements (like a queue):\n");
// 	while(!ll.empty()){
// 		printf("Popping -> %d\n", ll.front()->data);
// 		ll.pop_front();
// 	}
// 	return 0;
// }