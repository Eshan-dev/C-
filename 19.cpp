#include<iostream>
using namespace std;

string area (int r){
    float area = 2 * 3.14 *r;
    string rs = to_string(r);
    string areaS = to_string(area);
    string s = "Area of circle of radius " + rs +" is "+areaS;
    return s;
}
string area(int l , int b){
    int area = l*b;

    string s = "Area of Rectangle of Lenght " + to_string(l) + " and  Breath "+to_string(b) + " is " +to_string(area);
    return s;
}

int main(){
    cout<<area(12)<<endl;
    cout<<area(4,5)<<endl;
    return 0;
}