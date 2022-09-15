#include<iostream>
using namespace std;
 class c1{
    int a ,b;
    public: 
        c1(void);
    
    
        void printN(void){
            cout<<"the number is "<<a<<" + "<<b<<"i."<<endl;
        }
 };
 c1::c1(void){
  a=70;
  b=30;
 }

 int main(){
    c1 c;
    c.printN();
 

    return 0;
 }
