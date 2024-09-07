#include<iostream>
using namespace std;

class c2;
class c1 
{
    friend void swap(c1 &o1, c2  &o2);
    int cp1;
    public :
        void setData(int a ){
            cp1 = a;

        }
        void display(){
            cout<<"Value of private variable  of c1 is "<<cp1<<endl;
        }
};

class c2 
{
    friend void swap(c1 &o1, c2  &o2);
    int cp2;
    public :
        void setdata(int b ){
            cp2 = b;

        }
        void display(){
            cout<<"Value of private VARIABLE of c2 is "<<cp2<<endl;
        }
};

void swap( c1 &o1 , c2 &o2){
    int temp = o1.cp1;
    o1.cp1 = o2.cp2;
    o2.cp2  = temp;


}
int main(){
    c1 obj1;
    obj1.setData(78);
    obj1.display();
    c2 obj2;

    obj2.setdata(48);
    obj2.display();

    swap(obj1,obj2);

    obj1.display();
    obj2.display();
    return 0;
}