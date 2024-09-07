#include<iostream>
using namespace std;

class complex{
    int real , imaginary;
    public :
        complex(int r , int i){
            real = r;
            imaginary = i;
        }
        void print(){
            cout<<"Number is "<<real<<" + "<<imaginary<<"i"<<endl;
        }
};

int main(){
    complex a(78,420);
    a.print();
    complex b = complex(54,90);
    b.print();
    return 0;
}