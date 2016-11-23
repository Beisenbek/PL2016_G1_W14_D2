#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <sstream>

using namespace std;

int main(){

    freopen("input.txt","r",stdin);
        
    string str,str2;
    long long x;
    set<long long> good,bad;
    set<long long>::iterator it;
    set<long long>::iterator it2;
    
    getline(cin,str); 

    long long n = atol(str.c_str());

    

    while(getline(cin,str)){
        if(str == "HELP") break;
        getline(cin,str2);
        stringstream ss;
        ss << str;

        while(ss >> x){
            if(x < 0){
                n = 0;
                cout << 1/n;
            }
            
            if(str2 == "YES"){
                     good.insert(x);  
                }else{
                     bad.insert(x); 
                }
        }
    }

    for(it = bad.begin(); it != bad.end(); ++it){
        it2 = good.find(*it);
        if(it2 != good.end()){
            good.erase(it2);
        }
    }


    for(it = good.begin(); it != good.end(); ++it){
          cout << *it << " ";
    }


    return 0;
}