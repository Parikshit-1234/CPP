#include <iostream>
using namespace std;
class Base1{
    int x;
    public:
        Base1(int a){
            x=a;
        }
        void print_num1(){
            cout<<"The value of a is "<<x<<"."<<endl;
        }
};

class Base2{
    int y;
    public:
        Base2(int b){
            y=b;
        }
        void print_num2(){
            cout<<"The value of b is "<<y<<"."<<endl;
        }
};

class Derived:public Base1,public Base2
{
int p,q;
public:
    Derived(int a,int b,int c,int d):Base1(a),Base2(b){
        p=c;
        q=d;
    }
    void print_num3(){
        cout<<"The value of c is "<<p<<"."<<endl;
        cout<<"The value of d is "<<q<<"."<<endl;
    }
};

int main(){
    Derived d1(10,20,30,40);
    d1.print_num1();
    d1.print_num2();
    d1.print_num3();
    



    return 0;
}