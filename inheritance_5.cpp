#include<iostream>
using namespace std;
class Base{
    int a,b;
    public:
        Base(int x,int y):a(x+(2*y)),b(y){
            cout<<"The value is "<<a+b<<endl;
 }
};





int main(){
Base b1(10,20);
    return 0;
}
