#include <iostream>
using namespace std;

bool keyPresent(int arr[],int s,int k){
  
    if(s==0){
     return false;
    }
    if(arr[0]==k){
    return true;
    }
    else{
        return keyPresent(arr+1,s-1,k);
    }
    

}

int main(){
int arr[6]={1,2,3,4,5,6};


int x = keyPresent(arr,6,1);
if(x){
    cout<<"present."<<endl;
}
else{
    cout<<"absent."<<endl;
}

    return 0;
}