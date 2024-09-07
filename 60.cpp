#include<iostream>
#include<fstream>

using namespace std;
int main(){
    ofstream out_obj("60a.txt");
    out_obj<<"Hello World"<<endl;
    out_obj<<"Testing Line 2"<<endl;

    ifstream in_obj("60b.txt");
    string s1;
    getline(in_obj,s1);
    getline(in_obj,s1);
    cout<<s1;

    return 0;
}