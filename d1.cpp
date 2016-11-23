#include <iostream>
#include <map>
#include <set>
using namespace std;
 
int main(){

    freopen("input.txt","r",stdin);
    
    map <int, int> mymap;
    int n, m, a, b;
    set <int> anya;
    set <int> borya;
    set <int> myset;
    cin >> n >> m;
    for (int i=0; i<n; i++){
        cin >> a;
        anya.insert(a);
    }
    for (int j=0; j<m; j++){
        cin >> b;
        borya.insert(b);
    }
    set <int>::iterator it;
    set <int>::iterator iter;
    for (it = anya.begin(); it != anya.end(); it++){
        if(borya.find(*it) != borya.end()){
            myset.insert(*it);
        }
    }

    cout << myset.size() << endl;
    for (it = myset.begin(); it != myset.end(); it++){
        cout << *it << " ";    
        anya.erase(*it);
        borya.erase(*it);
    }

    cout << endl;
    cout << anya.size() << endl;
    for (it = anya.begin(); it != anya.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
    cout << borya.size() << endl;
    for (it = borya.begin(); it != borya.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}