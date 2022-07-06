#include<iostream>

using namespace std;

int main(){
int i,j,k;

int r =5;

for(i=r;i>0;i--)
{
for(k=r;k>i;k--)
{
cout<<" ";
}
for(j=0;j<i*2-1;j++)
{
if(i==r)
{
cout<<"*";
}
else
{
if(j==0 || j==i*2-2)
{
cout<<"*";
}
else
{
 cout<<" ";
}
}
}
cout<<"\n";
}
}
