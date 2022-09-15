#include<iostream>
using namespace std;
int main(){
int x=7;
int y=9;
int n;
int count=x+y;
cout<<"enter the value of n :"<<endl;
cin>>n;
cout<<endl;
cout<<"**************************************************"<<endl;
cout<<endl;
cout<<x<<endl;
cout<<y<<endl;
cout<<count<<endl;

for(int i=0;i<=n;i++){
    x=y;
    y=count;
    count+=x;
    cout<<x+y<<endl;
    
}



    return 0;
}