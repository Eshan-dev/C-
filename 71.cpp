#include<iostream>
#include<vector>
using namespace std;
template<class T>

void display(vector<T> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

template<class T>
void set_vector(vector<T> &v){
    int size;
    T input;
    cout<<"Enter the size of vector ";
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the element number "<<(i+1)<<" of vector"<<endl;
        cin>>input;
        v.push_back(input);
    }
    
}
int main(){
    // vector<int> v1;
    // set_vector(v1);
    // // v1.pop_back();
    // display(v1);
    // vector<int> :: iterator i1 = v1.begin();
    // // v1.insert((i1+1),23,23);
    // display(v1);

    vector <int>  v2(4,89);
    // display(v2);
    vector <int>  v3;
    cout<<v3.empty();
    return 0;
}