#include<iostream>
using namespace std;

void swapPointer (int *a , int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int x = 40 , y=6;
    cout<<"The value of x is "<<x<<" The value of y is "<<y<<endl;
    swapPointer( &x,&y);
    cout<<"The value of x is "<<x<<" The value of y is "<<y<<endl;
    return 0;
}