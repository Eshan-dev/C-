#include<iostream>
using namespace std;
template<class T>
void display(T v){
    cout<<"Template function called "<<v<<endl;
}
void display(int v){
    cout<<"Integer function is called "<<v<<endl;
}

template<class T>
class c1
{
    T data;
    public:
        c1(T v){
            data=v;
        }
        void display(){
            cout<<"Data = "<<data<<endl;
        }
        void change( T v);
};
template<class T>
void c1<T>::change(T v){
    data=v;
}
int main(){
    display(45);
    display(45.8);
    display('c');
    c1 <int>obj1(34);
    obj1.display();
    obj1.change(98);
    obj1.display();
    return 0;
}