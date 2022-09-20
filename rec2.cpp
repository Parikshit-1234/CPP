#include <iostream>
using namespace std;


bool sorted(int arr[],int s){
if(s==0 || s==1){
    return true;
}
if(arr[0]>arr[1]){
    return false;
}
else{
    bool restpart = sorted(arr+1,s-1);
    return restpart;
}

}

int main(){


    int arr[7] ={1,2,3,4,5,6,7};
    bool ans = sorted(arr,7);
    if(ans){
        cout<<"Aray is sorted."<<endl;
    }
    else{
        cout<<"Array is not sorted."<<endl;
    }
    return 0;
}