#include<iostream>
using namespace std;

int factorial(int num){
    if (num==1 || num ==0){
        return 1;
    }
    return (num * factorial(num - 1));
}

int main(){
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    cout<<endl<<"Factorial of "<<n<<" is "<<factorial(n);
    return 0;
}