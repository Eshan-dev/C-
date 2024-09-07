#include<iostream>
using namespace std;

template<class T>

void display(T variable){
    cout<<variable<<endl;
}
int main(){
    display(1332);
    display(6.09);
    display("String");
    display('c');
    return 0;
}