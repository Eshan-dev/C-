#include<iostream>
using namespace std;

class base{
    int a;
    int b;
    public: 
        base(int num1 , int num2) :  a(num1) , b(num2){
            cout<<"Value of a is "<<a<<endl;
            cout<<"Value of b is "<<b<<endl;
        }
};
int main(){
    base b2(4,6);
    return 0;
}