#include<iostream>

using namespace std;

int main()
{
int n,i,j;

cin>>n;

for(i=n;i>=1;i--) //first upper half
{
 for(j=n;j>i;j--)//first innr half of upper part
 {
  cout<<j;
 }
 for(j=1;j<=(2*i-1);j++) //second innerpart of upper half
 {
 cout<<i;
 }
 for(j=i+1;j<=n;j++) //third innerpart of upper half
 {
 cout<<j;
 }
 cout<<"\n";
}

for(i=1;i<n;i++)
{
for(j=n;j>i;j--)
{
cout<<j;
}
for(j=1;j<=2*i-1;j++)
{
 cout<<i+1;
}
for(j=i+1;j<=n;j++)
{
 cout<<i+1;
}
for(j=i;j<=n;j++)
{
cout<<j;
}
cout<<"\n";
}
}
