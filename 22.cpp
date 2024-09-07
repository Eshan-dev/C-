#include<iostream>
#include<string>
using namespace std;

class binary{
    string b;
    void check();
    public :
        void input();
        void invert();
        void display();
        

};
void binary :: input(){
     cout<<"Enter a Binary Number : ";
    cin>>b;
    cout<<endl;
}

void binary :: check(){
    for(int i = 0 ; i < b.length() ; i++){
        if (b.at(i) != '0' && b.at(i) != '1'){
            cout<<"Number you entered is not binary";
            exit(0);
        }
    }
}

void binary :: invert(){
    check();
    for(int i = 0 ; i <b.length(); i++){
        if(b.at(i) == '0'){
            b.at(i) = '1';
        }
        else {
            b.at(i) = '0';
        }
    }
}

void binary :: display(){
    cout<<"Number is : "<<b<<endl;
}
int main(){
    binary a1;
    a1.input();
    a1.display();
    a1.invert();
    a1.display();
    return 0;
}