/* Write a method to replace all spaces in a string with '%20'. 
you may assume that the string has sufficient space at the end of the string to hold the additional characters and that you are given the 'true' length of the string.
Example: 
	Input: 'Mr John Smith'
	Output: 'Mr%20John%20Smith'
*/

#include "replaceSpaces.h"

#include <iostream>
#include <cstdlib>

using namespace std;

void replace_spaces(char*& str, size_t length){
	/* V1: 
		generate another string and copy characters over replacing the space with the
		'%20' character whenever you encouter it.
	*/

	char newString[length+1]; // initialize the new string to the length of the old string
	size_t newStringIndex = 0;
	size_t oldStringIndex = 0;

	while (newStringIndex < length){
		char toMove = *(str + (oldStringIndex * sizeof(char)));
		// cout << "To Move -> '" << toMove << "'" << endl; 
		// charsAdded also keeps track of the index in our second string to which we're adding the character
		if(toMove == ' '){
			newString[newStringIndex] = '%';
			newString[newStringIndex+1] = '2';
			newString[newStringIndex+2] = '0';
			newStringIndex += 3;
		}
		else{
			newString[newStringIndex] = toMove;
			newStringIndex++;
		}
		oldStringIndex++;
	}
	printf("Our new string -> %s\n", newString);
	str = newString; // we're done
}