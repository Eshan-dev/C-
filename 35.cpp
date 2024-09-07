#include<iostream>
using namespace std;


int count = 0;
class number{
    public:
        number(){
            count++;
            cout<<"Constructor is called for object number "<<count<<endl;
        }
        ~number(){
            cout<<"Destructor is called for object number "<<count<<endl;
            count--;
        }
};
int main(){
    cout<<"Entering the main function"<<endl;
    number n1,n2;
    {
        cout<<"Enter the block"<<endl;
        number n3;
        number n4;
        cout<<"Exiting the block"<<endl;
    }
    cout<<"Back to main function"<<endl;
    return 0;
}