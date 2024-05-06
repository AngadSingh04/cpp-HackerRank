#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

// key point kya he 
// auto it = set_name.find(val);
// if(it != set_name.end()){
//     cout << "yes";  if the find fucntion is not able to find the element then iterator it == set_name.end()
// } else{
//     cout <<"no";
// }


int main(){
    set<int>s;
    int n;
    cin >>n;
    for(int i =0; i< n;i++){
        int q , x;
        cin >> q >> x;
        auto it = s.find(x);
        switch (q)
        {
        case 1:
            s.insert(x);
            break;
        case 2:
            s.erase(x);
            break;
        case 3:
            
            if(it!= s.end()){
                cout << "Yes"<<endl;
            } else{
                cout << "No"<<endl;
            }
            break;
        default:
            break;
        }
    }


    return 0;
}