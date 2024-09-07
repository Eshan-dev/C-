#include<iostream>
#include<cmath>
using namespace std;

class simpleCalculator{
    protected: 
        float simple1;
        float simple2;
    public: 
        void setSimpleData(float , float);
        void simpleDisplay();
};

void simpleCalculator :: setSimpleData(float num1 , float num2){
    simple1 = num1;
    simple2 = num2;
}
void simpleCalculator :: simpleDisplay(){
    cout<<"Value of "<<simple1<<" + "<<simple2<<" is "<<(simple1 + simple2)<<endl;
    cout<<"Value of "<<simple1<<" - "<<simple2<<" is "<<(simple1 - simple2)<<endl;
    cout<<"Value of "<<simple1<<" * "<<simple2<<" is "<<(simple1 * simple2)<<endl;
    cout<<"Value of "<<simple1<<" / "<<simple2<<" is "<<(simple1 / simple2)<<endl;
}


class scientificCalculator{
    protected:
        float scientific1, scientific2;
    public:
        void setScientificData(float , float);
        void scientificDisplay();
};

void scientificCalculator :: setScientificData(float num1 , float num2){
    scientific1 = num1;
    scientific2 = num2;
}

void scientificCalculator :: scientificDisplay(){
    cout<<"The Value of log "<<scientific1<<" is "<<log(scientific1)<<" and log "<<scientific2<<" is "<<log(scientific2)<<endl;
    cout<<"The Value of square root "<<scientific1<<" is "<<sqrt(scientific1)<<" and square root "<<scientific2<<" is "<<sqrt(scientific2)<<endl;
    cout<<"The Value of cube root "<<scientific1<<" is "<<cbrt(scientific1)<<" and cube root "<<scientific2<<" is "<<cbrt(scientific2)<<endl;
    cout<<"The Value of sin "<<scientific1<<" radian is "<<sin(scientific1)<<" and sin "<<scientific2<<" radian is "<<sin(scientific2)<<endl;
}

class hybridCalculator : protected simpleCalculator , protected scientificCalculator
{   public :
        void setSimple(float,float);
        void setScientific(float,float);
        void getSimple(void);
        void getScientific(void);
};

void hybridCalculator :: setSimple(float num1 , float num2){
    setSimpleData(num1, num2);
}
void hybridCalculator :: setScientific(float num1 , float num2){
    setScientificData(num1, num2);
}

void hybridCalculator :: getSimple(void){
    simpleDisplay();
}
void hybridCalculator :: getScientific(void){
    scientificDisplay();
}
int main(){
    float simple1, simple2 , scientific1, scientific2;
    hybridCalculator calculator;
    cout<<"Enter two numbers for Simple Calculator "<<endl;
    cin>>simple1>>simple2;
    calculator.setSimple(simple1, simple2);
    cout<<"Enter two numbers for Scientific Calculator "<<endl;
    cin>>scientific1>>scientific2;
    calculator.setScientific(scientific1, scientific2);
    cout<<"Result of Simple Calculator is below "<<endl;
    calculator.getSimple();
    cout<<"Result of Scientific Calculator is below "<<endl;
    calculator.getScientific();
    return 0;
}