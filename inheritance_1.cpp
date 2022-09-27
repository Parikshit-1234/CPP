#include <iostream>
#include <cmath>
using namespace std;
class simple_calc{
    int a,b;
    public:
        void setN(int x,int y){
            a=x;
            b=y;
        }
            void getVa(){
                cout<<"The sum of a and b is " <<a+b<<"."<<endl;
                cout<<"The difference of a and b is " <<a-b<<"."<<endl;
                cout<<"The product of a and b is " <<a*b<<"."<<endl;
                cout<<"The quotient of a and b is " <<(float)a/b<<"."<<endl;
            }
        };
  class scientific_calc{
    int a;
    public:
        float setV(int a){
            this->a=a;
            return a;
        }
        void getV(){
            cout<<"The sine of a is "<<(float)sin(a)<<"."<<endl;
            cout<<"The cosine of a is "<<(float)cos(a)<<"."<<endl;
            cout<<"The tangent of a is "<<(float)tan(a)<<"."<<endl;
            cout<<"The rounded value  of a is "<<(float)ceil(a)<<"."<<endl;
        }
  };      
 class hybrid:public simple_calc,public scientific_calc{
    public:
        void display(){
            cout<<endl;
            cout<<endl;
            cout<<"*******************************DERIVED CLASS**********************************"<<endl;
            cout<<endl;
            cout<<endl;
        }

 };

int main(){
    hybrid h1;
    h1.display();
    h1.setN(10,20);
    h1.getVa();
    h1.setV(99.99);
    h1.getV();

    return 0;
}