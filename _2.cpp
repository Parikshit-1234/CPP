#include <bits/stdc++.h>
using namespace std;
 bool prime(int n){
    if(n==0 || n==1){
        return false;
    }
    for(int i=2;i<=n;i++){
        if(n%i==0){
            return false;
        }
        else{
        return true;
        }
    }
    return true;
 }

int main(){
int n;
cout<<"Enter the value of n :"<<endl;
cin>>n;
for(int i=2;i<=n;i++){
    if(prime(n)){
    cout<<i<<" ";
    }
}


    return 0;
 }