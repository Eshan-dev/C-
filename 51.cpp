#include<iostream>
using namespace std;
class complex{
    int real , imaginary;
    public:
        void set_data(int r , int m ){
            real = r;
            imaginary = m;
        }
        void get_data(){
            cout<<"Complex number is "<<real<<" + "<<imaginary<<"i"<<endl;
        }
};
int main(){
    complex obj1;
    complex * ptr1 = &obj1;
    (*ptr1).set_data(12,4);
    (*ptr1).get_data();

    complex *arrptr = new complex[3];
    (*arrptr).set_data(1,6);
    (*arrptr).get_data();
    (arrptr+1)->set_data(34,5);
    (arrptr+1)->get_data();
    return 0;
}