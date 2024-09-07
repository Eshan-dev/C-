#include<iostream>
using namespace std;

class str{
    string car;
    string gear;
    public :
    str(){
        car = "Not Set";
        gear = "Neutral";
    }
    void display(){
        cout<<"Name of car is "<<car<<" and It is in "<<gear<<" gear"<<endl;
    }
};

int main(){
    str a1;
    a1.display();
    return 0;
}