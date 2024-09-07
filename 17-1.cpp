#include<iostream>
using namespace std;

void fibbonachi(){
    int a = 1 ;
    int b = 1;
    int i =1;
    while (i<40){
        int  c = a + b;
        cout<<c<<endl;
        a=b;
        b=c;
        i++;
            }
}

int main(){
    fibbonachi();
    return 0;
}