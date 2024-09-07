#include<iostream>
using namespace std;

class student{
    protected :
        int roll_number;
        void get_roll_number(){
            cout<<"Roll Number of Student is "<<roll_number<<endl;}
    public :
        void set_roll_number(int a){
            roll_number = a;
        }
        
};

class test : virtual public student{
    protected :
        int maths;
        int physics;
        void get_marks(){
            cout<<"Marks in Maths = "<<maths<<endl;        
            cout<<"Marks in Physics = "<<physics<<endl;        }
    public :
        void set_marks(int m , int p){
            maths = m;
            physics = p;
        }
};
class sports : virtual public student{
    protected :
        int score;
    public :
        void set_score(int s){
            score = s;
        }
        void get_score(){
            cout<<"Score = "<<score<<endl;        
      }
};

class result : public test, public sports{
    protected:
    public :
        void display(){
        int percentage = ((maths+physics+score)/3);
            get_roll_number();
            get_marks();
            get_score();
            cout<<"Percentage = "<<percentage;
        }
};
int main(){
    result obj1;
    obj1.set_roll_number(34);
    obj1.set_marks(90,88);
    obj1.set_score(86);
    obj1.display();

    return 0;
}