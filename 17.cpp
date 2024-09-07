#include<iostream>
using namespace std;

void print( int a)
{
   int static b = a;
    cout<<b<<endl;
}
int main(){
    print(11);
    print(90);
    return 0;
}