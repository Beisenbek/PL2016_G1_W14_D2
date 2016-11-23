#include <iostream>
#include <vector>
using namespace std;


int strToInt(string str){
	int res = 0;

	for(int i = 0; i < str.length(); ++i){
		int t = int(str[i]) - 48;
		res = res * 10 + t;
	}

	return res;
}

int main(){

	freopen("input.txt","r",stdin);

	string str;
	getline(cin,str);
	
	cout << strToInt(str) << endl;
	
	cout << strToInt(str) + strToInt(str);

 	return 0;
}


