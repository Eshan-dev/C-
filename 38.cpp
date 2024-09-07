#include<iostream>
using namespace std;

class base{
    int data1;
    public:
        int data2;
        void setData();
        int getData1();
        int getData2();
};

class derived : base {
    int data3;
    public:
        void process();
        void display();
};

void base :: setData(){
    data1 = 10;
    data2 = 20;
}

int base :: getData1(){
    return data1;
}

int base :: getData2(){
    return data2;
}

void derived :: process(){
    setData();
    data3 = data2 * getData1();
}

void derived :: display(){
    cout<<"Data 1 = "<<getData1()<<endl;
    cout<<"Data 2 = "<<data2<<endl;
    cout<<"Data 3 = "<<data3<<endl;
}


int main(){
    derived d1;
    d1.process();
    d1.display();
    return 0;
}