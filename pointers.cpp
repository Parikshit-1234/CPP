#include<iostream>
using namespace std;

class Base_1{
    public:
        int x=10;
         void display_base_1(){
            cout<<"The value is "<<x<<"."<<endl;
            cout<<"Base 1 class pointer called."<<endl;
        }

};
class Base_2{
    public:
        int y=20;
        void display_base_2(){
            cout<<"The value is "<<y<<"."<<endl;
            cout<<"Base 2 class pointer called."<<endl;
        }

};
class derived:public Base_1,public Base_2{
    public:
    int a=30;
           void display_der(){
            cout<<"The value of a is "<<a<<"."<<endl; 
            cout<<"Derived class pointer called."<<endl;
        }
};


int main(){
Base_1 b1;
Base_1* ptr1;
Base_2* ptr2;
Base_2 b2;
derived d1;
derived *ptr3;
ptr1 = &b1;
ptr1->display_base_1();
ptr2 = &b2;
ptr2->display_base_2();
ptr3 = &d1;
ptr3->display_der();



    return 0;
}