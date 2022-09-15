#include<iostream>
using namespace std;
class number{
    string s;
    public:
        void read();
        void check();
        void swap();
};

void number::read(void){
    cout<<"enter the number :"<<endl;
    cin>>s;
}
void number::check(){
    for(int i=0;i<s.length();i++){
    if(s.at(i)!='0' && s.at(i)!='1'){
        cout<<"invalid binary number"<<endl;
        break;
    }
    else{
        return ;
    }
}
}
void number::swap(){
    for(int i=0;i<s.size();i++){
    if(s.at(i)='0'){
        s.at(i)='1';
    }
    else{
        s.at(i)='0';
    }
}
}



int main(){
number n1;
n1.read();
n1.check();
n1.swap();

    return 0;
}