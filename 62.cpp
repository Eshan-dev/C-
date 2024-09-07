#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream file;
    string content;

    for (int i = 1; i < 63; i++)
    {
        cout<<endl<<"File Number "<<i<<endl;
        string name;
        name = to_string(i)+".cpp";
        file.open(name);
        while(file.eof()==0)
        {
            getline(file,content);
            cout<<content<<endl;
        }
        file.close();
    }
    
    int a;
    cin>>a;

    return 0;
}