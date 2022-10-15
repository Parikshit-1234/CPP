#include<iostream>
using namespace std;
int fib(int x){
    if(x<=1){
        return x;
    }
    else{
        return fib(x-1) + fib(x-2);
    }
}

int main(){
int n;
cout<<"Enter the value of n :"<<endl;
cin>>n;
for(int i=0;i<n;i++){
cout<<fib(i) <<" ";
}

    return 0;
}