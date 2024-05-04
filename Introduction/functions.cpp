#include<iostream>
using namespace std;

int max_of_four(int a, int b, int c, int d){
    int maxsum = a;
    if(b>a && b>c && b>d){
        maxsum = b;
    }else if(c>a && c>b && c>d){
        maxsum = c;
    }else if(d>a && d>b && d>c){
        maxsum = d;
    }else {
        maxsum = a;
    }

    return maxsum;
}

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >>d;
    int ans = max_of_four(a,b,c,d);
    cout << ans;
    return 0;
}