#include<iostream>
using namespace std;

int main(){
int n,digit,tmp,reverse=0;
cout<<"enter the number : ";
cin>>n;
tmp=n;
while(n>0){
    
    digit = n % 10;
    reverse = reverse*10 + digit;
    n = n/10;

}
if (reverse==tmp){
    cout<<"The number entered is a palindrome."<<endl;
}
else{
    cout<<"The number is not a palindrome."<<endl;
}


    return 0;
}