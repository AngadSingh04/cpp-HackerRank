#include<iostream>
using namespace std;

void update(int *a, int *b){
    int sum = *a + *b;
    int absoluteDifference = abs(*a - *b);
    cout << sum <<endl << absoluteDifference <<endl;
}

int main(){
    int a,b;
    int *pa = &a;
    int *pb = &b;
    cin >> a >> b;
    update(pa,pb);
    return 0;
}