#include <iostream>
#include <string>
#include <bitset>
using namespace std;

int main(int argc, char const *argv[]){
	if(argc < 2){
		cout<<"Please give me a arg T_T";
		return -1;
	}else if(argc > 2){
		cout<<"Hurr Durr so many args O.o";
		return -1;
	}
	string text = argv[1];
	string::const_iterator it;
	for(it=text.begin(); it!= text.end(); it++){
		cout << bitset<8>(*it);
	}
	return 0;
}
