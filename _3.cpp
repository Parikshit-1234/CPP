#include <iostream>
using namespace std;
int sum(int n){
    int sum=0;
    if(n<1){
        cout<<"Invalid."<<endl;
    }
    else{
        for(int i=0;i<=n;i++){
            sum+=i;
        }
        return sum;
    }
    return 0;
}


int main(){
int n;
cout<<"Enter the value of n :"<<endl;
cin>>n;
cout<<"The sum of "<<n<<" numbers is : "<<sum(n)<<".";

    return 0;
}