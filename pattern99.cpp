#include<iostream>
using namespace std;

int main(){
int i,j,k,n;
cin>>n;
for(i=1;i<=n;i++)
{
 k=(i*2-1);
 for(j=i;j<=n;j++){
 cout<<k;
 k=k+2;

}cout<<"\n";
}
}
