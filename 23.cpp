#include<iostream>
using namespace std;

class shop {
    int itemid[100];
    int itemprice[100];
    int counter;

    public :
        void setprice();
        void displayprice();
        void init();

        
};

void shop :: setprice(){
    cout<<"Enter Item_ID of product ";
    cin>>itemid[counter];
    cout<<"Enter th Price of Product ";
    cin>>itemprice[counter];
    cout<<endl;
    counter++;
}


void shop :: displayprice(){
    for(int i = 0 ; i < counter; i++){
        cout<<"Price of product with Item_ID  "<<itemid[i]<<" is "<<itemprice[i]<<endl;
    }
}

void shop :: init(){
    counter = 0;
}

int main(){
    shop kirana_shop;
    kirana_shop.init();
    kirana_shop.setprice();
    kirana_shop.setprice();
    kirana_shop.setprice();
    kirana_shop.displayprice();

    return 0;
}