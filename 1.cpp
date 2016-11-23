#include <iostream>
#include <vector>
using namespace std;


vector<string> splitLine(string line){
	line = line + " ";
	vector<string> res;
	int pos = 0;
	int len = 0;

	for(int i = 0; i < line.length(); ++i){
		if(line[i] == ' '){
			len = i - pos;
			res.push_back(line.substr(pos,len));
			pos = i + 1;
		}
	}

	return res;
}

int main(){

	freopen("input.txt","r",stdin);

	string str;
	getline(cin,str);

	vector<string> r = splitLine(str); 

	for(int i = 0; i < r.size(); ++i){
		cout << r[i] << endl;
	}

 	return 0;
}


