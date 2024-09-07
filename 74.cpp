#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = {3,654,76,4,2};
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    sort(arr, arr+5, greater<int>());
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    
    return 0;
}