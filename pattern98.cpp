#include<iostream>
using namespace std;

int main(){
int i,j,n;
cin>>n;
for(int i=1;i<=5;i++){
 for(int j=n;j>n-i;j--){
 cout<<j;
 }
 for(j=1;j<=n-i;j++){
 cout<<5-i+1;
 }

cout<<"\n";
}
}
