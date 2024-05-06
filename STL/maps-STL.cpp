#include<iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

// map<key_type, data_type> map_name; 
// map_name.insert(make_pair(key_type,data_type));
// auto it = m.find(key_type) same as set-STL wala

int main(){
    map<string, int> m;
    int n;
    cin >> n;
    
    for(int i = 0; i<n;i++){
        int q,marks;
        string name;
        cin >> q >> name;
        auto it = m.find(name);
        switch (q)
        {
        case 1:
            cin >> marks;
            if(it!=m.end()){
                m[name] +=marks;
            }else{
                m.insert(make_pair(name,marks));
            }
            break;
        case 2:
            m.erase(name);
            break;
        case 3:
            if(it!=m.end()){
                cout << m[name] << endl;
            }else{
                cout << 0 <<endl;
            }
            break;
        default:
            break;
        }
    }
    return 0;
}