#include<iostream>
using namespace std;

int main(){
    int i,j,n;
    cout<<"Enter the number";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<(char)(64+j);
        }
        cout<<"\n";
    }

    return 0;
}

void func(){
    int n;
for(int i=n;i<=1;i--){
    for(int j=n;j<=1;j--){
        cout<<(char)(64+j);
    }
    cout<<"\n";
}
}
/*
A
AB
ABC
ABCD
ABCDE
*/
