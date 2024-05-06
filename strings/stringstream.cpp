#include<iostream>
#include<sstream>
using namespace std;

int main(){
    stringstream ss;
    ss << "Hello, " << 123 << " world!";
    string str = ss.str();
    return 0;
}