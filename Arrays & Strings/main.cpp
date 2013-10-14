#include <iostream>
#include <string>
#include "replaceSpaces.h"

int main(){
	char* someStr = "hello world   ";
	size_t length = 13;
	printf("Before:\t%s\n", someStr);
	replace_spaces(someStr, length);
	printf("\nAfter:\t%s\n", someStr);
	return 0;
}