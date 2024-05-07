#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> myv;
    int N;
    cin >> N;
    for(int i = 0; i < N; i++){
        int x;
        cin >> x;
        myv.push_back(x);
    }
    sort(myv.begin(),myv.end());
    for(int i = 0; i < N; i++){
        cout << myv[i] << " ";
    }

    return 0;
}