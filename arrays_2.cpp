#include<iostream>
using namespace std;
int pivot(int arr[],int i,int j){
    int piv = arr[i];
    int count = 0;
    for(int i=0;i<=j;i++){
    if(piv<arr[i]){
        count++;
    }
    }
    int pivInd = i + count;
    swap(arr[pivInd],arr[i]);
    int s = i;
    int e = j;
    while(s<pivInd && j>pivInd){
        while(arr[s]<piv){
            i++;
        }
        while(arr[e]>piv){
            j--;
        }
        if(i<pivInd && j>pivInd){
            swap(arr[i++],arr[j--]);
        }
        return pivInd;
    }
    return 0;
}


void sort(int arr[],int i,int j){
if(i>=j){
    return;
}
int p = pivot(arr,i,j);
sort(arr,i,p-1);
sort(arr,p+1,j);

}


int main(){
int arr[5]={60,30,40,70,90};
int size = 5;
sort(arr,0,size-1);
for(int i=0;i<size;i++){
    cout<<arr[i]<<endl;
}
    return 0;
}