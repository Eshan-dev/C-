#include<iostream>
using namespace std;

void count(){
    int static c=1;
    cout<<c<<endl;
    c = c + 1;
}

int main(){
    int a = 1;
    while(a<=420){
        count();
        a++;
    }
    return 0;
}