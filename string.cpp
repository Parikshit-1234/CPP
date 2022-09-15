#include<iostream>
using namespace std;

int main(){
string fName="Parikshit ";
string lName="Sahu";

cout<<fName+lName<<endl;
// cout<<fName.append(lName)<<endl;
for(int i=0;i<fName.length();i++){
    cout<<fName[i];
 
}
for(int j=0;j<lName.length();j++){
    cout<<lName[j];

}

    return 0;
}