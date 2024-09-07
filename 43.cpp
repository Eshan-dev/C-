#include<iostream>
using namespace std;

class Hindi{
    public:
        void greet(){
            cout<<"Kaise ho ?"<<endl;
        }
};
class English{
    public:
        void greet(){
            cout<<"How are you ?"<<endl;
        }
};

class derived : public Hindi, public English{
    public:
        void greet(){
            English :: greet();
        }
};
int main(){
    Hindi obj1;
    obj1.greet();
    
    English obj2;
    obj2.greet();

    derived obj3;
    obj3.greet();

    return 0;
}