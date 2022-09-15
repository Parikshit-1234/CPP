#include<iostream>
using namespace std;
 class emp{
    int a,b,c;
    public:
    void setData(int a1,int b1,int c1);
    void getData(){
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
        cout<<"the value of c is "<<c<<endl;
    }
 };
 void emp::setData(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=c1;

 }
 int main(){
    emp e1;
    e1.setData(10,20,30);
    e1.getData();
    return 0;
 }