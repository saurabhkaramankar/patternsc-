#include<iostream>
using namespace std;

int main(){
    int i,j,n;
    cout<<"Enter the number";
    cin>>n;
    for(int i=n;i>=1;i--){
        for(int j=n;j>=i;j--){
            cout<<j;
        }
        cout<<"\n";
    }
    return 0;
}
/*
5
54
543
5432
54321
*/
