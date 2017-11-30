#include <iostream>
using namespace std;

int main(){
	string text = "aaab";
	int counter[26] = {0}; //counters: in alphabetic order.
	int x; //value incrementor.

	for(string::const_iterator it = text.begin(); it != text.end(); it++){
		if(*it >= 'a' && *it <= 'z'){
			x = *it - 'a'; //like b - a = 1; so it'll increment the second element in counter array;
			counter[x]++;
		}
	}

	for(auto &i: counter){
		cout<<'\n'<<i;
	}


	return 0;
}