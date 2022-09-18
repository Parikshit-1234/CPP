#include<iostream>
using namespace std;
class employee{
      int id;
      public:
        void setId(int x){
            id = x;
            
        }
        void getId(void){
            cout<<"the id of the employee is "<<id<<'.'<<endl;
        }

};

class emp:public employee{
    float salary;
    public:
        void setS(float y){
         salary = y;
          
        }
        void getS(){
              cout<<"the salary of the employee is "<<salary<<'.'<<endl;
        }



};

int main(){
    employee e1,e2;
    e1.setId(100);
    e2.setId(200);
    e1.getId();
    e2.getId();

    emp s1,s2;
    s1.setS(565.56);
    s1.getS();
    s2.setS(989.90);
    s2.getS();
    return 0;
}