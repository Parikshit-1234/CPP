#include<iostream>
using namespace std;
int factorial(int x){
    if(x==0 || x==1){
        return 1;
    }
    else{
        return x*factorial(x-1);
    }
}
int sum(int a,int b,int c){
    return a+b+c;
}


int main(){
int x,y,z;
cout<<"Enter three numbers : "<<endl;
cin>>x>>y>>z;
int a=factorial(x);
int b=factorial(y);
int c=factorial(z);
cout<<"The factorial of "<<x<<" is "<<a<<endl;
cout<<"The factorial of "<<y<<" is "<<b<<endl;
cout<<"The factorial of "<<z<<" is "<<c<<endl;
cout<<"Their sum is "<<sum(a,b,c)<<endl;

    return 0;
}