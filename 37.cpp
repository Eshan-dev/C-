#include<iostream>
using namespace std;

class employee{
    public:
        int ID;
        int salary;
        employee(int inpID , int s =450){
            ID = inpID;
            salary = s;
        }
        employee(){}
        void display()
        {
            cout<<"Employee ID is "<<ID<<" and  salary is "<<salary<<endl;
        }
};

class programmer : employee {
    int languageCode;
    public:
    programmer(int I , int l = 0 , int s =900){
        ID = I;
        languageCode = l;
        salary = s;
    }
    void display(){
        cout<<"Programmer ID is "<<ID<<", Language Code is "<<languageCode<<" and salary is "<<salary<<endl;
    }
};
int main(){
    employee rahul(1), sunny(2, 600);
    rahul.display();
    sunny.display();

    programmer harry(3 , 3, 400000) , garry(4 , 9 , 40000);
    harry.display();
    garry.display();


    return 0;
}