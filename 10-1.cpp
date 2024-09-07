#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int j = 1;
    while (j<=100)
    {
        cout<<"6 * "<<setw(3)<<j<<" = "<<setw(3)<<(j*6)<<endl;
        j++;
    }
    
    return 0;
}