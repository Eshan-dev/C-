#include<iostream>
using namespace std;

class item {
    int id;
    int price;
    public:
        void set_data(int a , int b ){
            id = a;
            price = b;
        }
        void get_data(){
            cout<<"Price of item with ID "<<id<<" is "<<price<<endl;
        }
};
int main(){
    int a,b;
    item * arr = new item[3];
    for (int i = 0; i < 3; i++)
    {
        cout<<"Enter the ID and Price of Item "<<(i+1)<<endl;
        cin>>a>>b;
        (arr+i)->set_data(a,b);
    }
    for (int i = 0; i < 3; i++)
    {
        (arr+i)->get_data();
    }
    
    
    return 0;
}