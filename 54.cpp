#include<iostream>
using namespace std;

class base{
    public:
        int var_base;
        void display(){
            cout<<"Display function of base class"<<" value of variable is "<<var_base<<endl;
        }
};
class derived : public base{
    public:
        int var_derived;
        void display(){
            cout<<"Display function of derived class"<<" value of variable "<<var_derived<<endl;
        }
};
int main(){
    base * base_pointer;
    derived obj_derived;
    base_pointer = &obj_derived;
    base_pointer->var_base = 23;
    base_pointer->display();

    return 0;
}