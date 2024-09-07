#include<iostream>
#include<list>
using namespace std;
template<class T>
void display(list<T> &l){
    list<int> :: iterator i1 = l.begin();
    for (int i = 0; i < l.size(); i++)
    {
        cout<<*i1<<" ";
        i1++;

    }
    cout<<endl;
    
}
int main(){
    list<int> l1;
    l1.push_back(3);
    l1.push_back(13);
    l1.push_back(30);
    l1.push_back(33);
    l1.push_back(23);
    l1.sort();
    // display(l1);

    list <int> l2;
    l2.push_back(25);
    l2.push_back(5);
    l2.push_back(75);
    l2.sort();
    // display(l2);
    l1.merge(l2);
    l1.clear();
    display(l1);

    // display(l1);
    // l1.pop_back();
    // display(l1);
    // l1.pop_front();
    // display(l1);
    // l1.remove(30);
    // display(l1);
    // display(l1);


    // list<int> :: iterator i1 = l1.begin();
    // cout<<*i1<<" ";
    // i1++;
    // cout<<*i1<<" ";
    // list<int> list2(3);
    // list<int> :: iterator iter = list2.begin();
    // *iter = 23;
    // iter++;
    // *iter = 26;
    // iter++;
    // *iter = 29;
    // iter++;
    // display(list2);
    return 0;
}