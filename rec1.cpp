#include <iostream>
using namespace std;

void reach(int src,int des){
    if(src==des){
        cout<<"Reached...."<<endl;
        return;
    }
    src++;
    cout<<"source : "<<src<<endl;
    cout<<"destination : "<<des<<endl;
    reach( src, des);

}

int main(){

    int src=1;
    int des=10;
    reach(src,des);

    return 0;
}