#include<iostream>
using namespace std;
int main(){
    int marks[5]={34,54,67,66,89};
    int i =0;
    do{
        cout<<"Value of marks["<<i<<"] is : "<<marks[i]<<endl;
        i++;
    }while(i<5);

    cout<<"using Pointer"<<endl;
    int * p=marks ;
    int p1=0;
    while(p1<5){
        cout<<*p<<endl;
        p++;
        p1++;
    }
    return 0;
}