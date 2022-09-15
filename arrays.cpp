#include<iostream>
using namespace std;

int main(){
string array[]={" a "," b "," c "," d "," e "};
for(int i=0;i<=array->length()+1;i++){
    cout<<array[i];
}
cout<<endl;
for(int j=0;j<5;j++){
    cout<<array[j];
}


    return 0;
}