#include<iostream>
#include<map>
using namespace std;
int main(){
    map<string, float> marksMap;
    marksMap["Eshan"] = 91.8;
    marksMap["Harry"] = 99.6;
    marksMap["Garry"] = 89.4;
    map<string, float> :: iterator i;
    for ( i = marksMap.begin(); i !=marksMap.end(); i++)
    {
        cout<<(*i).first<<" : "<<(*i).second<<endl;
    }
    
    marksMap.insert({"Larry" , 87.9});
    map<string, float> :: iterator i2;
    for ( i2 = marksMap.begin(); i2 !=marksMap.end(); i2++)
    {
        cout<<(*i2).first<<" : "<<(*i2).second<<endl;
    }
    
    return 0;
}