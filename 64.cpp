#include<iostream>
using namespace std;
template<class T>
class vector{
    int size;
    public:
        T * arr;
        vector(int s){
            size = s;
            arr = new T[size];
        }
        T dotProduct(vector v){
            T dot_product = 0;
            for (int i = 0; i < (size); i++)
            {
                dot_product = dot_product + (arr[i] * v.arr[i]);
            }
            return dot_product;
        }


};
int main(){
    vector <float> v1(3);
    vector <float> v2(3);
    v1.arr[0]=2.5;
    v1.arr[1]=4.7;
    v1.arr[2]=1.9;
    v2.arr[0]=5.2;
    v2.arr[1]=2.3;
    v2.arr[2]=4.2;

    float dot = v1.dotProduct(v2);
    cout<<dot;

    return 0;
}