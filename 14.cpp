#include<iostream>
using namespace std;

struct student{
    string uid;
    int section;
    float attendance;
};
int main(){
    struct student eshan;
    eshan.uid = "Me nahi bataunga";
    eshan.section = 420;
    eshan.attendance = 100;

    cout<<"eshan.uid : "<<eshan.uid<<endl;
    cout<<"eshan.section : "<<eshan.section<<endl;
    cout<<"eshan.attendance : "<<eshan.attendance<<endl;
    return 0;
}