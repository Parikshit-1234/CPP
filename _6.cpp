#include<iostream>
using namespace std;
template<class t1,class t2>
class base{
t1 a;
t2 b;
public:
    void setV(t1 x,t2 y){
        a=x;
        b=y;
    }
    void getV(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
    }
};

int main(){ 
    base<char,float> b1;
    b1.setV('a',10.11);
    b1.getV();
    return 0;
}