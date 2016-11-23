#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <sstream>

using namespace std;

bool good[100000];
bool bad[100000];

int main(){

    freopen("input.txt","r",stdin);
        
    string str,str2;
    
    getline(cin,str); 
    long long x;

    long long n = atol(str.c_str());

    while(getline(cin,str)){
        if(str == "HELP") break;
        getline(cin,str2);
        stringstream ss;
        ss << str;

        while(ss >> x){
            if(str2 == "YES"){
                good[x] = true;  
            }else{
                bad[x] = true;  
            }
        }
    }

    for(int i = 1; i < 100000; ++i){
        if(good[i] && !bad[i]){
            cout << i << " ";
        }
    }

    return 0;
}