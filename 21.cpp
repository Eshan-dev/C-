#include<iostream>
using namespace std;

class employee{
    private :
        int salary;
        string role;
    public:
        string name;
        void setvar(string name1, string role1, int sal );
        void changesalary(int newsal);
        void display(){
            cout<<"Name of Employee is "<<name<<endl;
            cout<<"Role of Employee is "<<role<<endl;
            cout<<"Salary of Employee is "<<salary<<endl;
        }
};

void employee :: setvar(string name1, string role1 , int sal){
    name = name1;
    role = role1;
    salary = sal;
}

void employee :: changesalary(int newsal){
    salary = newsal;
}

int main(){
    employee emp1;
    emp1.setvar("Rahul","SDE", 100000);
    emp1.display();
    emp1.changesalary(110000);
    emp1.display();
    return 0;
}