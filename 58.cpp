#include<iostream>
using namespace std;

class CWH{
    protected:
        string title;
        float rating;
    public:
        CWH( string s, float r){
            title = s;
            rating = r;
        }
        virtual void display()=0;
};

class CWH_video : public CWH{
    float video_lenght;
    public:
        CWH_video(string title , float rating, float lenght):CWH(title,rating){
            video_lenght = lenght;
        }
        void display(){
            cout<<"The title of video is "<<title<<endl;
            cout<<"Rating of video is "<<rating<<endl;
            cout<<"Lenght of video is "<<video_lenght<<" minutes"<<endl;
        }
};

class CWH_text:public CWH{
    int no_of_words;
    public:
        CWH_text(string title, float rating , int noOfWords):CWH(title,rating){
            no_of_words = noOfWords;
        }
        void display(){
            cout<<"Title of this text is "<<title<<endl;
            cout<<"Rating of this text is "<<rating<<endl;
            cout<<"Number of words of this text is "<<no_of_words<<endl;
        }
};
int main(){
    CWH_video v1("Polymorphism", 4.88, 28.36);
    // v1.display();

    CWH_text w1("Polymorphism", 4.77, 4690);
    // w1.display();

    CWH * code[2];
    code[0] = &v1;
    code[1] = &w1;
    code[0]->display();
    code[1]->display();
    return 0;
}