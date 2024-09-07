#include<iostream>
using namespace std;
int main(){
    int a= 78;
    int * b = &a;
    cout<<"The value of "<<b<<endl;
    cout<<"Value stored at adress of b "<<*b<<endl;
    int c = 23;
    int * d = &c;
    cout<<d;
    return 0;
}