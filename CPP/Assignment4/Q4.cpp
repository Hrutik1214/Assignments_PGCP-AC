#include<iostream>
using namespace std;

class Calculator{

    int num1;
    int num2;
    int num3;

    public:

    void get(){
        cout<<"Enter the first number";
        cin>>num1;
        cout<<"Enter the first number";
        cin>>num2;
    }

    void add(){
        num3=num1+num2;
        cout<<"Addition is :"<<num3<<endl;
    }
    void subtract(){
        num3=num1-num2;
        cout<<"Sub is :"<<num3<<endl;

    }
    void multiply(){
        num3=num1*num2;
        cout<<"Multi is :"<<num3<<endl;
    }
    void divide(){
        num3=num1/num2;
        cout<<"Division is:"<<num3<<endl;
    }
    void square(){
        num3=num1*num1;
        num3=num2*num2;
        cout<<"Square is :"<<num3<<endl;
    }
};

int main(){
    
    Calculator c1;
    c1.get();
    c1.add();
    c1.subtract();
    c1.multiply();
    c1.divide();
    c1.square();


}