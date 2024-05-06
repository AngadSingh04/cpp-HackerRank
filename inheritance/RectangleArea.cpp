#include<iostream>
using namespace std;
class Rectangle{
    protected:
    int height, width;
    public:
        void display(){
            cout << width << " " << height<<endl;
        }
};
class RectangleArea : public Rectangle{
    public:
        void read_input(){
            cin >> height >> width;
        }
        void display(){
            cout << width*height<<endl;
        }
};
int main(){
    RectangleArea rarea;
    rarea.read_input();
    rarea.Rectangle::display();
    rarea.display();


    return 0;
}