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

vector<string> splitLine(string line){
	line = line + " ";
	vector<string> res;
	int pos = 0;
	int len = 0;

	for(int i = 0; i < line.length(); ++i){
		if(line[i] == ' '){
			len = i - pos;
			res.push_back(strToInt(line.substr(pos,len)));
			pos = i + 1;
		}
	}

	return res;
}

int main(){

	freopen("input.txt","r",stdin);

	string str;
	getline(cin,str);

	vector<string> r = f(str); 

	for(int i = 0; i < r.size(); ++i){
		cout << r[i] << endl;
	}

 	return 0;
}


