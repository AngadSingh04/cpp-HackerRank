#include<iostream>
using namespace std;

class abc{
    int value;
    public:
        abc(){
            value = 10;
        }
        void operator ++(){
            value = value + 5;
        }
        int display(){
            return value;
        }
};
int main(){
    abc a;
    ++a;
    cout << a.display();
    return 0;
}