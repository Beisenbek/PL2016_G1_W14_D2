#include <iostream>
#include <sstream>
#include <map>
#include <stdlib.h>

using namespace std;

string city;
map<string,string> a;
string str;
int main(){

	freopen("input.txt","r",stdin);
	string country_name,city_name;  
	int n;
	
	getline(cin,str);
	 n = atoi(str.c_str()); // строка как число число
	for(int i= 0; i < n; ++i){
		stringstream ss;
		getline(cin,str);
		ss << str;
		ss >> country_name;
		while(ss >> city_name){
			a[city_name] = country_name;
			 city_name = city;
		}
	}

	int m;
	getline(cin, str);
	 m = atoi(str.c_str());     
	string j[m+1];
	for(int i=0;i<m;i++){
		cin>>city;
		j[i]=a[city];
		cout << j[i] << endl;
	}
	/*for(int i=0;i<n;i++){
		cout<<j[i]<<endl;
	}*/


 	return 0;
}