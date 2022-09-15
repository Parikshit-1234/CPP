#include<iostream>
using namespace std;


int fac(int n){
    if(n==0 ||n==1){
        return 1;
    }
    else{
        return n*fac(n-1);
    }
}
int fib(int x){
    if (x==0 ||x==1){
        return 1;
    }
    else{
        return fib(x-1)+fib(x-2);
    }
}
int main(){
int n;
cout<<"enter the value of n :"<<endl;
cin>>n;
cout<<"the series is "<<fib(n)<<endl;

int num;
cout<<"enter the value of num :"<<endl;
cin>>num;
cout<<"the factorial is "<<fac(n)<<endl;



    return 0;
}