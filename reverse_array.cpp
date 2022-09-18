#include <iostream>
using namespace std;
 

 void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
      

    }
 }
 void rev(int arr[],int n){
    for(int i=0;i<(n/2);i++){
       int tmp;
       tmp = arr[i];
       arr[i]=arr[n-i-1];
       arr[n-i-1] = tmp;
 }
 }


int main(){


   int arr[]={10,20,30,40,50,60,70,80,90,100};
   cout<<"The array is : "<<endl;
   printArr(arr,10);
   cout<<"The reverse array is : "<<endl;
   rev(arr,10);
   printArr(arr,10);



    return 0;
}