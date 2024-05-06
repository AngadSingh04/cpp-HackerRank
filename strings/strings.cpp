#include<iostream>
#include<string>
using namespace std;

int main(){
    string a,b;
    cin >> a >> b;                   // a = angad
    int len_a = a.size();             // b = singh
    int len_b = b.size();
    cout << len_a << " " << len_b << endl;
    string con = (a+b);
    cout << con << endl;
    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    cout << a << " " << b <<endl;

}