#include<iostream>
using namespace std;

class c2;

class c1{  
    int value;
    friend void add(c1 ,c2 );
    public:
        void setN(int x){
            x=value;
        }
        void display(){
            cout<<"the value of data 1 is "<<value<<endl;
        }
};

class c2{  
    int num;
     friend void add(c1 ,c2 );
    public:
        void setN(int y){
            y=num;
        }
        void display(){
            cout<<"the value of data 2 is "<<num<<endl;
        }
};

void add(c1 o1,c2 o2){ 
    cout<<"the sum is "<<o1.value + o2.num<<endl;
}


int main(){
    c1 x;
    x.setN(95);
    x.display();
    c2 y;
    y.setN(99);
    y.display();
    add(x,y);
 



    return 0;
}