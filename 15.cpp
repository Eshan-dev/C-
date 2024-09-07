#include<iostream>
using namespace std;

int sum(int a , int b);
int multiply(int , int);
int main(){
    int num1,num2;

    cout<<"Enter first number : "<<endl;
    cin>>num1;
    cout<<"Enter second number : "<<endl;
    cin>>num2;
    cout<<"sum = "<<sum(num1, num2)<<endl;
    cout<<"multiply = "<<multiply(num1, num2)<<endl;
    return 0;
}

int sum(int a , int b){
    int c = a + b;
    return c;
}

int multiply(int a , int b){
    return (a*b);
}