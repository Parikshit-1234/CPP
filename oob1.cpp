#include<iostream>
using namespace std;

class complex{
int a,b;
friend complex sumC(complex o1,complex o2);
    public:
        void setNum(int x,int y){
            a=x;
            b=y;
        }
        void display(void){
            cout<<"the complex number is "<<a<<" + "<<b<<"i. "<<endl;
        }


};
complex sumC(complex o1,complex o2){
    complex o3;
    o3.setNum((o1.a + o2.a),(o1.b + o2.b));
    return o3;
}



int main(){
complex c1,c2,c3;
c1.setNum(10,20);
c1.display();
c2.setNum(30,40);
c2.display();
sumC(c1,c2).display();


    return 0;
}