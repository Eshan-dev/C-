#include <iostream>
using namespace std;
int main (){
    cout<<"Printing using for loop"<<endl;
    for(int i=1;i<=10;i++){
        cout<<i<<endl;
    }
    cout<<endl<<"Printing using while loop"<<endl;
    int i=1;
    while(i<=10){
        cout<<i<<endl;
        i++;
    }cout<<endl<<"Printing using do while loop"<<endl;
    int j=1;
    do{
        cout<<j<<endl;
        j++;
    }while(j<=10);
}