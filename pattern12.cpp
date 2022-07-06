#include<iostream>
using namespace std;

int main(){
    int i,j,n;
    cout<<"Enter the number";
    cin>>n;
    for(int i=n;i>=1;i--){
        for(int j=n;j>=i;j--){
            cout<<i;
        }
        cout<<"\n";
    }
    return 0;
}
/*
5
44
333
2222
11111
*/
