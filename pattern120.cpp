#include<iostream>
using namespace std;

int main(){
int i,j,l,k;
for(i=0;i<=5;i++){
for(k=5;k>=i;k--)
cout<<" ";
for(j=1;j<=i;j++)
cout<<j;
for(l=i;l>=1;l--)
cout<<l;

cout<<"\n";
}
}
