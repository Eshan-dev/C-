#include<iostream>
using namespace std;

class base1{
    int number_base1;
    public:
        base1(int a){
            cout<<"Constructor of base1 called"<<endl;
            number_base1 = a;
        }
        void display_base1(){
            cout<<"The Value Of number_base1 is "<<number_base1<<endl;
        }
};
class base2{
    int number_base2;
    public:
        base2(int a){
            cout<<"Constructor of base2 called"<<endl;
            number_base2 = a;
        }
        void display_base2(){
            cout<<"The Value Of number_base2 is "<<number_base2<<endl;
        }
};

class derived : public base1 , public base2{
    int derived1 , derived2;
    public:
        derived(int b1,int b2,int d1,int d2):base1(b1),base2(b2){
            cout<<"Constructor of derived called"<<endl;
            derived1 = d1;
            derived2 = d2;
        }
        void display_derived(){
            display_base1();
            display_base2();
            cout<<"Value of derived1 is "<<derived1<<endl;
            cout<<"Value of derived2 is "<<derived2<<endl;
        }
};
int main(){
    derived d1(1,2,3,4);
    d1.display_derived();
    return 0;
}