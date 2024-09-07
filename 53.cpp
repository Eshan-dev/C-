#include<iostream>
using namespace std;

class number{
    int num;
    public: 
        number & setData(int num){
            this->num = num;
            return *this;
        }
        void getData(){
            cout<<"Number is "<<num<<endl;
        }
};
int main(){
    number n;
    number ptr =   (n.setData(78));
    n.getData();
    ptr.getData();
    return 0;
}