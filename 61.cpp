#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string name;
    ofstream out_file("61a.txt");
    cout<<"Enter your name ";
    cin>>name;
    out_file<<"My name is "<<name;
    out_file.close();

    string file_content;
    ifstream in_file("61a.txt");
    getline(in_file, file_content);
    cout<<"Content of file is below"<<endl;
    cout<<file_content;
    in_file.close();


    
    return 0;
}