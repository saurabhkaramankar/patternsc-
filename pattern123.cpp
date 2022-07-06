#include<iostream>
using namespace std;

int main(){
int i,j,l,k;
for(i=0;i<=5;i++){
for(k=5;k>=i;k--)
cout<<" ";
for(j=1;j<=i-1;j++)
if(i==3)
cout<<j+i;
else if(i==4)
cout<<j+i+2;
else
cout<<j+i-1;
for(l=i;l>=1;l--)
if(i==3)
cout<<l+i;
else if(i==4)
cout<<l+i+2;
else
cout<<l+i-1;
cout<<"\n";
}
}
