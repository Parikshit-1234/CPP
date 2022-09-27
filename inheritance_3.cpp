#include <iostream>
using namespace std;

class X{
    public:
        void say(){
            cout<<"....HELLO  HOW  ARE  YOU...."<<endl;
        }
};
class Y{
    public:
        void say(){
            cout<<"!!!! HEYYYYYY HOW  ARE  YOU !!!!"<<endl;
        }
};
 class Hybrid:public X,public Y{
    int x;
    public:
      void say(){
        cout<<"**** HAVE A GOOD DAY ****"<<endl;
        X::say();
        Y::say();
      }


 };




int main(){
Hybrid h1;
h1.say();

    return 0;
}
