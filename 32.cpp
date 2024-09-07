#include<iostream>
using namespace std;

class complex{
    int r, i;
    public:
        complex(int a = 0 , int b = 0){
            r = a;
            i = b;
        }
        void print(){
            cout<<"Complex number is "<<r<<"+"<<i<<"i"<<endl;
        }
};
int main(){
    complex x;
    x.print();
    complex y(7);
    y.print();
    complex z(5,9);
    z.print();
    return 0;
}