#include <iostream>
using namespace std;

int main()
{
    int row, col;
    cout << "enter the number of rows : " << endl;
    cin >> row;
    cout << "enter the number of columns : " << endl;
    cin >> col;
    for (int i=1;i<=row;i++){
        for(int j=5;j>=i;j--){        
    cout<<"* ";
    }
    cout << endl;
    }
    return 0;
}