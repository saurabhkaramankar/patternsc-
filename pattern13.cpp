#include<iostream>
using namespace std;

int main(){
    int i,j,n;
    cout<<"Enter the number";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<(char)(64+i);
        }
        cout<<"\n";
    }
    return 0;
}
/*
A
BB
CCC
DDDD
EEEEe
*/
