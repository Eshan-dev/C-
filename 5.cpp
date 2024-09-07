#include <iostream>
using namespace std;
int main(){
    string name;
    cout<<"Enter you name\n";
    cin>>name;
    cout<<"Hello "<<name<<"\n";
    int num1,num2;
    cout<<"Enter the Value of num1 \n";
    cin>>num1;
    cout<<"Enter the Value of num2 \n";
    cin>>num2;
    int sum = num1+num2;
    cout<<"Value of num 1 is : "<<num1<<"\nValue of num2 is : "<<num2<<"\nSum to num1 and num2 is : "<<sum;
    return 0;
}