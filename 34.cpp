#include<iostream>
using namespace std;

class number{
    int num;
    public:
        number(){};
        number(int a = 0);
        number(number &obj);
        void display();
};

number :: number(int a){
    num = a;
}

number :: number(number &obj){
    cout<<"Copy Constructor"<<endl;
    num = obj.num;
    
}

void number :: display(){
    cout<<"The number is "<<num<<endl;
}
int main(){
    number n1(56);
    n1.display();
    number n2(n1);
    n2.display();
    return 0;
}