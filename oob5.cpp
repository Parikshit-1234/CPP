#include<iostream>
using namespace std;
 class c1{
    int a ,b;
    public: 
      c1(){
            a = 0;
            b = 0;
        }
        c1(int x,int y){
            a = x;
            b = y;
        }
        c1(int x){
            a = x;
            b = 0;
        }
      
    
        void printN(void){
            cout<<"the number is "<<a<<" + "<<b<<"i."<<endl;
        }
 };


 int main(){

    c1 p(70,30);
    p.printN();

    c1 q(100);
    q.printN();

    c1 r;
    r.printN();
 

    return 0;
 }
