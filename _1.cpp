#include<bits/stdc++.h>
using namespace std;

int prime(int a){
    if(a<=1){
        return 0;
    }
    else{
        for(int i=2;i<a;i++){
            if(a%i==0){
                cout<<a<<" is not prime."<<endl;
                break;
            }
            else{
                cout<<a<<" is prime"<<endl;
                break;
            }
        }
    }
    return 0;
}


int main(){
    int x;
    cout<<"Enter the value of x"<<endl;
    cin>>x;
    prime(x);
    return 0;
}