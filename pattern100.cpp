#include<iostream>
using namespace std;

int main(){
int i,j,k,n;
cin>>n;
for(i=1;i<=n;i++)
{
 k=i;
 for(j=1;j<=6-i;j++){
 cout<<k;
 k=k+5-j;

}cout<<"\n";
}
}
