#include <iostream>
using namespace std;
class A{
    protected:
    int a;
    public:
    void setV(int x){
        a=x;
    }
        void display_1(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"Hello how are you.?"<<endl;
        }

};
class B{
    protected:
    int b;
    public:
    void setVa(int x){
        b=x;
    }
        void display_2(){
            cout<<"The value of b is "<<b<<endl;
            cout<<"Have a good day!!!"<<endl;
        }

};
class derived:public A,public B{
    int x;
};


int main(){
    int p,q;
    derived d;
    cout<<"Enter the value of a "<<endl;
    cin>>p;
    cout<<"Enter the value of b "<<endl;
    cin>>q;
    d.setV(p);
    d.display_1();
    d.setVa(q);
    d.display_2();
    return 0;
}