#include<iostream>
using namespace std;

int main(){
    int a;
    cin >>a;
    int myarr[a];
    for(int i = 0; i<a; i++){
        cin >> myarr[i];
    }


    for(int i = a-1; i>=0; i--){
        cout << myarr[i] << " ";
    }
    return 0;
}