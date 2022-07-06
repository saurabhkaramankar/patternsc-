#include<iostream>
using namespace std;

int main(){
int i,j,n;
int val =1;
cin>>n;
for(i=2;i<=n;i++)
{
 for(j=1;j<=i;j++){
 cout<<val;
 val++;
 }
 val=val-1;
 cout<<"\n";
}
}
