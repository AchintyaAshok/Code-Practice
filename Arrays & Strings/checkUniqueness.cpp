/* Implement an algorithm to determine if a string has all unique chracters. What if you cannot use additional data structures? */

bool is_unique(string& toCheck){
	string left;

	for(size_t i=0; i < toCheck.size(); i++){
		char elemToSearch = toCheck[i];
		if (check_for_char(left, elemToSearch)) return false;
		left += elemToSearch;
	}

	return true;
}

bool check_for_char(const string& str, char elem){
	for(size_t i=0; i < str.length(); i++){
		if(str[i] == elem) return true;
	}
	return false;
}