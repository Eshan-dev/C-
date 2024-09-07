#include<iostream>
using namespace std;

class bank{
    int principal , years ;
    float interest , returnvalue;

    public:
        bank();
        bank(int p , int y , int r);
        bank(int p , int y ,float r);
        void calculate();

};

bank :: bank(){}
bank :: bank(int p , int y , int r){
    principal = p;
    years = y;
    interest = float(r)/100;
}
bank :: bank(int p , int y , float r){
    principal = p;
    years = y;
    interest = r;
}

void bank :: calculate(){
    returnvalue = principal;
    for (int i = 0; i < years; i++)
    {
        returnvalue = returnvalue * (1 + interest);
    }
    cout<<"Principal Amount is "<<principal<<" and return value is "<<returnvalue<<" after "<<years<<" years"<<endl;
    
}
int main(){
    bank d1, d2, d3;
    int p , y ,r;
    float R;

    cout<<"Enter the value of p , y and R "<<endl;
    cin>>p>>y>>R;
    d1 = bank(p , y ,R);
    d1.calculate();

    cout<<"Enter the value of p , y and r "<<endl;
    cin>>p>>y>>r;
    d2 = bank(p , y ,r);
    d2.calculate();
    return 0;
}