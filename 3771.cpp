#include <iostream>
#include <sstream>
#include <map>
#include <set>
#include <vector>
using namespace std;

map<string,string> a;
map<string,int> level;
set<string> names;
map<string, vector<string> > b;

void f(string parent_name){
	vector<string> children = b[parent_name];

	for(int i = 0; i < children.size(); ++i){
		string child_name = children[i];
		level[child_name] = level[parent_name] + 1;
		f(child_name);
	}

}

int main(){

	freopen("input.txt","r",stdin);

	int n;
	cin >> n;

	string child_name, parent_name;
	

	for(int i = 0 ; i < n ; ++i){
		cin >> child_name >> parent_name;
		a[child_name] = parent_name;
		b[parent_name].push_back(child_name);
		names.insert(child_name);
		names.insert(parent_name);
	}

	for(set<string>::iterator it = names.begin();it!=names.end();++it){
		if(a[*it] == "") {
			level[*it] = 0;
			f(*it);
			break;
 		}
	}

	for(set<string>::iterator it = names.begin();it!=names.end();++it){
		cout << *it << " " << level[*it] << endl;
	}

 	return 0;
}


