#include<iostream>
using namespace std;
class c2;

class c1{
    int x;
    friend void swap(c1 &,c2 &);
    public:
        void setN(int s1){
            x=s1;
        }
        void display(){
            cout<<"the value of num 1 is "<<x<<endl;
        }
};


class c2{
    int y;
    friend void swap(c1 &,c2 &);
    public:
        void setN(int s2){
            y=s2;
        }
        void display(){
            cout<<"the value of num 2 is "<<y<<endl;
        }
};

void swap(c1 &p,c2 &q){
    int temp;
    temp = p.x;
    p.x =  q.y;
    q.y = temp;
    
}


int main(){
 
c1 a;
a.setN(15);
a.display();

c2 b;
b.setN(25);
b.display();
swap(a,b);
cout<<"the value after swaping is : "<<endl;

a.display();
b.display();

 return 0;
}

