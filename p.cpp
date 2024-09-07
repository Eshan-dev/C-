#include <iostream>
using namespace std;
int bill = 0;
int re = 0;
int time = 0;
int main()
{   while (true){
        cout << "Press 1 for Breakfast" << endl<< "Press 2 for Lunch" << endl<<"Press 3 for Dinner" << endl;
        cin >> time;
        if (time == 1){
            int dish;
            cout << "Breakfast Menu" << endl<< "Press 1 for Tea Price : 20 Rupees" << endl<< "Press 2 for Coffe Price : 50 Rupees" << endl<< "Press 3 for Milk Price : 100 Rupees" << endl<< "Press 4 for Special Thali Price : 150 Rupees" << endl;
            cin >> dish;
            if (dish == 1){
                bill = bill + 20;
                cout << "Enjoy Your Tea your bill is " << bill << endl<< "Press 1 to order something again " << endl<< "Press any other key to Exit " << endl;
                cin >> re;
                if (re == 1){exit;}
                else
                {return 0;}}
            else if (dish == 2){
                bill = bill + 50;
                cout << "Enjoy Your Coffe your bill is " << bill << endl<< "Press 1 to order something again " << endl<< "Press any other key to Exit " << endl;
                cin >> re;
                if (re == 1){exit;}
                else{return 0;}}
            else if (dish == 3){
                bill = bill + 100;
                cout << "Enjoy Your Milk your bill is " << bill << endl<< "Press 1 to order something again " << endl<< "Press any other key to Exit " << endl;
                cin >> re;
                if (re == 1){exit;}
                else{return 0;}}
            else if (dish == 4){
                bill = bill + 150;
                cout << "Enjoy Your Special Thali your bill is " << bill << endl<< "Press 1 to order something again " << endl<< "Press any other key to Exit " << endl;
                cin >> re;
                if (re == 1){exit;}
                else{return 0;}}}
        else if (time == 2){
            int dish;
            cout << "Lunch Menu" << endl<< "Press 1 for Tea Price : 20 Rupees" << endl<< "Press 2 for Coffe Price : 50 Rupees" << endl<< "Press 3 for Roti Price : 70 Rupees" << endl<< "Press 4 for Paneer Price : 120 Rupees" << endl;
            cin >> dish;
            if (dish == 1){
                bill = bill + 20;
                cout << "Enjoy Your Tea your bill is " << bill << endl<< "Press 1 to order something again " << endl<< "Press any other key to Exit " << endl;
                cin >> re;
                if (re == 1){exit;}
                else{return 0;}}
            else if (dish == 2){
                bill = bill + 50;
                cout << "Enjoy Your Coffe your bill is " << bill << endl<< "Press 1 to order something again " << endl<< "Press any other key to Exit " << endl;
                cin >> re;
                if (re == 1)
                {exit;}
                else{return 0;}}
            else if (dish == 3){
                bill = bill + 70;
                cout << "Enjoy Your Roti your bill is " << bill << endl<< "Press 1 to order something again " << endl<< "Press any other key to Exit " << endl;
                cin >> re;
                if (re == 1){exit;}
                else{return 0;}}
            else if (dish == 4) {
                bill = bill + 120;
                cout << "Enjoy Your Paneer your bill is " << bill << endl<< "Press 1 to order something again " << endl<< "Press any other key to Exit " << endl;
                cin >> re;
                if (re == 1){exit;}
                else{return 0;}}
        }
        else if (time == 3)
        {
            int dish;
            cout << "Dinner Menu" << endl<< "Press 1 for Raj Mah Price : 120 Rupees" << endl<< "Press 2 for Panner Price : 150 Rupees" << endl<< "Press 3 for Roti Price : 70 Rupees" << endl<< "Press 4 for Naan Price : 35 Rupees" << endl;
            cin >> dish;

            if (dish == 1){
                bill = bill + 120;
                cout << "Enjoy Your Raj Mah your bill is " << bill << endl<< "Press 1 to order something again " << endl<< "Press any other key to Exit " << endl;
                cin >> re;
                if (re == 1){exit;}
                else{return 0;}}
            else if (dish == 2){
                bill = bill + 150;
                cout << "Enjoy Your Panner your bill is " << bill << endl<< "Press 1 to order something again " << endl<< "Press any other key to Exit " << endl;
                cin >> re;
                if (re == 1){exit;}
                else{return 0;}}
            else if (dish == 3){
                bill = bill + 70;
                cout << "Enjoy Your Roti your bill is " << bill << endl<< "Press 1 to order something again " << endl<< "Press any other key to Exit " << endl;
                cin >> re;
                if (re == 1){exit;}
                else{return 0;}}
            else if (dish == 4){
                bill = bill + 35;
                cout << "Enjoy Your Naan your bill is " << bill << endl<< "Press 1 to order something again " << endl<< "Press any other key to Exit " << endl;
                cin >> re;
                if (re == 1){exit;}
                else{return 0;}}
            else{cout<<"Enter a vaild input"<<endl;
                exit;}}
        else{cout<<"Enter a vaild input"<<endl;
            exit;}}
return 0;}