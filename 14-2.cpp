#include<iostream>
using namespace std;

union networth{
    float gold;
    int no_of_g_wagons;
    float rupees;
};
int main(){
    union networth raja;
    raja.gold = 1098.65;
    // raja.no_of_g_wagons = 6054;
    cout<<"Networth of raja in terms of Gold "<<raja.gold<<" kg"<<endl;

    return 0;
}