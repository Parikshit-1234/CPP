#include<iostream>
using namespace std;

int sum(int arr[], int s){
    if(s==0){
        return 0;
    }
    if(s==1){
        return arr[0];
    }
    else{
        int remaining = sum(arr+1,s-1);
        int sum = arr[0] + remaining;
        return sum;

    }
}



int main(){
int arr[10]={1,2,3,4,5,6,7,8,9,10};

int sum_arr = sum(arr,10);
cout<<"the sum is : "<<sum_arr<<endl;


    return 0;
}