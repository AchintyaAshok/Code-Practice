#include "LinkedList.h"
#include "linkedListProblems.h"

#include <iostream>
#include <set>
#include <stack>

/* QUESTION:	
		Write Code to remove duplicates from an unsorted Linked LinkedList 
*/
void remove_duplicates(LinkedList& myList){
	// option 1: rebuild the linked list without duplicates.
	// first we remove all the elements from the list and insert them into an unordered set.
	// then we remove all the elements from the set and insert it into the linked list.
	std::set<int> elementSet;
	while(!myList.empty()){
		// insertion into a set takes O(log(N)) time. Altogether, our amortized time for this loop will be O(Nlog(N))
		elementSet.insert(myList.back()->data);
		myList.pop_back();
	}
	for(std::set<int>::iterator i = elementSet.begin(); i != elementSet.end(); ++i){
		myList.push_back(*i); 	// since each element in a set is unique by definition, we just insert all the elements from the set
								// back into the linked list
	}
}

/* QUESTION:	
		Write code to partition a linked list around a value x, such at all nodes less than x come before
		all nodes greater than or equal to x
*/
void partition_list_around_val(LinkedList& list, int center){
	// This assumes that our linked list has the option of pushing to the front of the list where elements are ordered
	// from (back) newest...oldest (front). This is easy given our implementation of the Linked List (which is essentially a deque)
	LinkedList fixedList;
	while(!list.empty()){
		int elem = list.back()->data;
		list.pop_back();
		if(elem < center){
			fixedList.push_back(elem);	// add elements < center to the back of the list -- O(1) amortized time
		}
		else{
			fixedList.push_front(elem); // add elements >= center to the front of the list -- O(1) amortized time (because of impl.)
		}
	}
}


/* QUESTION:
		You have two numbers represented by a linked list, where each node contains a single digit. The digits are stored
		in reverse order, such that the 1's digit is at the head of the list. Write a function that adds the two numbers
		and returns the sum as a linked list.

		EXAMPLE:
			(7 -> 1 -> 6) + (5 -> 9 -> 2). That is, 617 + 295.
			Result: (2 -> 1 -> 9) = 912
*/
void add_linkedlist_numbers(LinkedList& leftAddend, LinkedList& rightAddend, LinkedList& sumList){
	/* 	
		Let's assume that the linked lists are not implemented as deques. That is, we cannot access and pop elements from
		both sides of the list. Let's assume this can only be done from the back where the back holds the newly 
		inserted elements.

		When the sum of two of the numbers is greater than 10, we have a carry that we need to add to the next tuple
		of numbers.
	*/

	int carry = 0;
	while(!leftAddend.empty() || !rightAddend.empty()){
		int leftValue, rightValue = 0;
		if(!leftAddend.empty()){
			leftValue = leftAddend.back()->data;
			leftAddend.pop_back();
		}
		if(!rightAddend.empty()){
			rightValue = rightAddend.back()->data;
			rightAddend.pop_back();
		}
		int sum = carry + leftValue + rightValue;
		printf("Left: %d, Right: %d, Carry: %d\n", leftValue, rightValue, carry);
		carry = sum/10; 			// this will give us the 10's digit or the carry for the next set of vals
		sum = sum%10;
		printf("Inserting sum: %d\n", sum);
		sumList.push_front(sum); 	// add the digit value to our sum linked list
	}
	// the total time complexity of this function will be 2 * O(max(N, M)) which is amortized to O(max(N, M))
}

