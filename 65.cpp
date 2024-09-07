#include<iostream>
using namespace std;
template<class T1,class T2>
class array{
    int size;
    T1 * a1 = new T1[size];
    T2 * a2 = new T2[size];
    public:
        array (int s){
            size =s;

        }
        void set(){
            T1 input1;
            for (int i = 0; i < size; i++)
            {
                cout<<"Enter element number "<<(i+1)<<" of First array"<<endl;
                cin>>input1;
                a1[i] = input1;
            }
            T2 input2;
            for (int i = 0; i < size; i++)
            {
                cout<<"Enter element number "<<(i+1)<<" of Second array"<<endl;
                cin>>input2;
                a2[i]=input2;
            }
            
            
        }
        void display(){
            for (int i = 0; i < size; i++)
            {
                cout<<"Element number "<<(i+1)<<" of First array is "<<a1[i]<<endl;
            }
            for (int i = 0; i < size; i++)
            {
                cout<<"Element number "<<(i+1)<<" of Second array is "<<a2[i]<<endl;
            }
            
        }

};
int main(){
    array < int ,char>a1(3);
    a1.set();
    a1.display();

    return 0;
}