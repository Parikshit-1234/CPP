#include<iostream>
using namespace std;


int sum(int x){
    if(x>0){
        return x + sum(x-1);
    }
    else{
        return 0;
    }
}

int  main(){
int x;
cout<<"enter the value of x :";
cin>>x;
cout<<"the sum of "<<x<<" numbers is "<<sum(x);





    return 0;
}