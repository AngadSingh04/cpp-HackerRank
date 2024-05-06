#include<iostream>
using namespace std;

class Student{
    private:
        int age, standard;
        string first_name, last_name;
    public:
        void set_age(int a){
            age = a;
        }
        int get_age(){
            return age;
        }
        void set_first_name(string fn){
            first_name = fn;
        }
        string get_first_name(){
            return first_name;
        }
        void set_last_name(string ln){
            last_name = ln;
        }
        string get_last_name(){
            return last_name;
        }
        void set_standard(int s){
            standard = s;
        }
        int get_standard(){
            return standard;
        }
        string to_method(){
            string ss = to_string(age) + "," + first_name + "," + last_name + "," + to_string(standard);
            return ss;
        }
};
int main(){
    Student St;
    int a,s;
    string fn, ln;
    cin >> a >> fn >> ln >> s;
    St.set_age(a);
    St.set_first_name(fn);
    St.set_last_name(ln);
    St.set_standard(s);

    cout<<St.get_age()<<endl;
    cout<<St.get_last_name()<<", "<<St.get_first_name()<<endl;
    cout<<St.get_standard() <<endl;
    cout<<endl;
    cout<<St.to_method();




    return 0;
}