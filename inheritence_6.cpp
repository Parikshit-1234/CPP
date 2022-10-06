#include<iostream>
using namespace std;

class student{
    protected:
    int roll_no;
    public:
    void setRollNo(int x){
        roll_no=x;
    }
    void display_no(){
        cout<<"The roll no is "<<roll_no<<"."<<endl;
    }
};
class marks{
    protected:
    int marks_1,marks_2;
    public:
        void setMarks(int x,int y){
            marks_1 = x;
            marks_2 = y;
        }
        void getMarks(){
            cout<<"The marks 1 is "<<marks_1<<"."<<endl;
            cout<<"The marks 2 is "<<marks_2<<"."<<endl;
        }   
        void total_marks(){
            float total=(marks_1+marks_2);
            cout<<"The total marks is "<<total<<"."<<endl;
        }

};
class result:public student,public marks{
     public:
       void display_percentage(){
        cout<<"The percentage secured is "<<(((float)(marks_1 + marks_2)/2))<<"."<<endl;
    }
};

int main(){
    result r1;
    r1.setRollNo(100);
    r1.display_no();
    r1.setMarks(99,98);
    r1.getMarks();
    r1.total_marks();
    r1.display_percentage();



    return 0;
}