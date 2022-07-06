#include<iostream>
using namespace std;

int main(){
    int i,j,n;
    cout<<"Enter the number";
    cin>>n;
    for(int i=n;i>=1;i--){
        for(int j=n;j>=1;j--){
            cout<<i;
        }
        cout<<"\n";
    }
    return 0;
}
/*
55555
44444
33333
22222
11111
*/
