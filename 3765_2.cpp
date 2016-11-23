#include <iostream>
#include <vector>
#include <map>

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

	string str,city_name,country_name;

	getline(cin,str);
	int n = strToInt(str);

	map<string,string> a;

	for(int i= 0; i < n; ++i){
		getline(cin,str);
		vector<string> r = splitLine(str);
		for(int i = 1; i < r.size(); ++i){
			a[r[i]] = r[0];
		}
	}

	getline(cin,str);
	int m = strToInt(str);

	for(int i = 0; i < m; ++i){
		getline(cin,city_name);
		cout << a[city_name] << endl;
	}

 	return 0;
}


