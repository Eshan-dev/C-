#include<iostream>
using namespace std;

class complex;
class calculator{
    public:
        int sumreal(complex , complex );


        int sumcomplex(complex q1 , complex q2 );

 };
class complex {
    // friend int calculator :: sumreal(complex ,complex );
    // friend int calculator :: sumcomplex(complex ,complex );
    friend class calculator;
    int a , b ;
    public :
        void setdata(int r , int c){
            a = r;
            b = c;
        }
        void display(){
            cout<<"Complex Number is "<<a<<" + "<<b<<"i"<<endl;
        }

};

int calculator :: sumreal(complex q1 , complex q2){
    return (q1.a + q2.a);
}

int calculator:: sumcomplex(complex q1 , complex q2){
    return (q1.b + q2.b);
}
 


int main(){
    complex c1, c2 ;
    c1.setdata(2,7);
    c1.display();
    c2.setdata(12,6);
    c2.display();

    calculator sum, sumc;

    int a = sum.sumreal(c1,c2);
    int b = sum.sumcomplex(c1,c2);
    // cout<<"Sum of real part of complex number is "<<sum<<endl;
    cout<<"Sum of real part of complex number is " << a<<endl;
    cout<<"Sum of Imaginary part of complex number is " << b<<"i"<<endl;
    return 0;
}