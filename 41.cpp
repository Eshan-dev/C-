#include<iostream>
using namespace std;

class base1 {
    protected : 
        int base1int;
    public:
        void setbase1(int a){
            base1int = a;
        }
};
class base2 {
    protected : 
        int base2int;
    public:
        void setbase2(int a){
            base2int = a;
        }
};

class derived : public base1 , public base2{
    public:
        void display(){
            cout<<"Value of Base 1 is "<<base1int<<endl;
            cout<<"Value of Base 2 is "<<base2int<<endl;
            cout<<"Value of sum Base 1 and Base 2 is "<<base1int + base2int<<endl;
        }
};
int main(){
    derived a1;
    a1.setbase1(12);
    a1.setbase2(13);
    a1.display();
    return 0;
}