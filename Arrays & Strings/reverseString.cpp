/* Implement a function void reverse(char* str) which reverses a null-terminated string */

#include <stack>


void reverse(char* str){
	// null terminated strings like ['h','e','l','l','o','\0']
	// 1. reverse it using another string 
	// 2. reverse it in place somehow.

	stack<char> charStack; // we push characters into here then build the string by popping.
	char* iter = str;
	size_t index = 0;
	while (*iter != '\0'){
		charStack.push(*iter); // push each character into the stack
		index += 1;
		iter = iter + (index * size_of(char)); // increment our pointer to the next index
	}

	// the second step is putting those characters back in place O(n) time
	// our total runtime will end up being an amortized O(w) -- depending on the length of the string
	
	index = 0; // reset our index
	while(!charStack.empty()){
		str[index] = charStack.top();
		charStack.pop();
		index++;
	}

}