#include<iostream>

using namespace std;
int main(){
    int a =89;
    int* ptr = &a;
    cout<<"Value of a is "<<*ptr<<endl;

    int *ptr1 = new int (34);
    cout<<"Value at *ptr1 is "<<*ptr1<<endl;

    int * ptr2 = new int[3];
    ptr2[0] = 11;
    ptr2[1] = 22;
    ptr2[2] = 33;
    cout<<"Value at *ptr2[0] is "<<(ptr2[0])<<endl;
    cout<<"Value at *ptr2[1] is "<<*(ptr2+1)<<endl;
    cout<<"Value at *ptr2[2] is "<<*(ptr2+2)<<endl;
    return 0;
}