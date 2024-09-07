#include<iostream>
using namespace std;

class complex {
    int a , b ;
    friend complex sum(complex c1, complex c2);
    public :
        void setdata(int r , int c){
            a = r;
            b = c;
        }
        void display(){
            cout<<"Complex Number is "<<a<<" + "<<b<<"i"<<endl;
        }

};

complex sum (complex c1 , complex c2){
    complex c3;
    c3.setdata(c1.a+c2.a , c1.b + c2.b);
    return c3;
}

int main(){
    complex c1, c2, s12;
    c1.setdata(5,3);
    c1.display();
    c2.setdata(6,9);
    c2.display();

    s12 = sum(c1, c2);
    s12.display();

    return 0;
}