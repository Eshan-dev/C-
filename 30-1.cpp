#include<iostream>
#include<cmath>
using namespace std;

class point{
    int x , y;
    public:
    friend void distance(point a , point b);
        point(int a , int b ){
            x = a;
            y = b;
        }
        void display(){
            cout<<"The point is ("<<x<<","<<y<<")"<<endl;
        }
};

void distance(point a , point b){
    int raw = ((a.x-b.x)*(a.x-b.x))+((a.y-b.y)*(a.y-b.y));
    float result = sqrt(raw);
    cout<<"Distance between ("<< a.x <<","<< a.y <<") and ("<< b.x << ","<< b.y<< ") "<<"is "<<result<<" units"<<endl;
}
int main(){
    point a(12,4);
    point b(8,56);
    a.display();
    b.display();
    distance(a,b);
    return 0;
}