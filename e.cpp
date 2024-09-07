#include<iostream>
using namespace std;


int main(){
    for (int i = 1; i < 11; i++)
    {
        if ( i ==1 || i==2 || i ==5 || i ==6 || i ==9 || i==10){
            cout<<"************"<<endl;
        }
        else{
            cout<<"***"<<endl;
        }
    }
    

    return 0;
}