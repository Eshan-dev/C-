#include<iostream>
using namespace std;

class number{
    protected:
        int num1 , num2;
    public :
        void setNumber(int n1, int n2){
            num1 = n1;
            num2 = n2;
        }
};
class subtract : virtual public number{
    protected :
        void subt(void){
            cout<<"The value of "<<num1<<" - "<<num2<<" is "<<(num1-num2)<<endl;
        }
};
class sum : virtual public number{
    protected :
        void sm(void){
            cout<<"The value of "<<num1<<" + "<<num2<<" is "<<(num1+num2)<<endl;
        }
};
class operate : virtual public sum, virtual public subtract{
    public :
        void display(){
            cout<<"First Number = "<<num1<<endl;
            cout<<"First Second = "<<num2<<endl;
        }
        void sum_and_subtract(){
            sm();
            subtract :: subt();

        }
};

int main(){
    operate obj1;
    obj1.setNumber(45,5);
    obj1.display();
    obj1.sum_and_subtract();
    return 0;
}