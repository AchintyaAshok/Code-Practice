/* Given two strings, write a method to decide if one is a permutation of the other */
#include <string>

bool is_permutation(string& first, string& second){
	// Simplest method of doing this, we just count the number of occurences of each character
	// in the first string, then check the second for the same number of each.
	// but our character could be any one of 128 characters.
	// to check this, we'd have to initialize an array of 128 possible characters

	int charArrayFirst[128]; 
	int charArraySecond[128];
	// initialize each index of both arrays to 0
	std::fill_n(charArrayFirst, 128, 0);
	std::fill_n(charArraySecond, 128, 0);


	for(size_t i=0; i < first.length(); i++){
		int index = int(first[i]); // convert it into it's numeric ASCII equivalent
		charArrayFirst[index]++;
	}
	for(size_t i=0; i < second.length(); i++){
		int index = int(second[i]);
		charArraySecond[index]++;
	}

	// now we compare the two arrays, and if any index has different values, we know
	// that the two strings are different.
	for(size_t i=0; i<128; i++){
		if(charArrayFirst[i] != charArraySecond[i]) return false;
	}

	return true; // this means that we have the same number of each character.
}