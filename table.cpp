#include<bits/stdc++.h>
using namespace std;
void table(int x){
     for(int i=1;i<=10;i++){
        cout<<x<<" x "<<i<<" = "<<x*i<<endl;
    }
}
void reverse_Table(int x){
    for(int i=10;i>=1;i--){
        cout<<x<<" x "<<i<<" = "<<x*i<<endl;
    }

}

int main(){
    int num;
    cout<<"enter the number you need to print the table off :"<<endl;
    cin>>num;
    table(num);
    cout<<endl;
    cout<<"***************************************************************"<<endl;
    cout<<endl;
    reverse_Table(num);
 
 


    return 0;
}