#include<iostream>

using namespace std;

int main()
{
int i,j,r,count;
cin>>r;

count=2;

for(i=1;i<=r;i++)
{
 if(i<=r/2)
 {
  for(j=1;j<=i;j++)
  {
   cout<<count;
  }
  count++;
  cout<<"\n";
 }
 else
 {
 count--;
 for(j=0;j<r-i+1;j++)
 {
 cout<<count;
 }
 cout<<"\n";
 }
}
}
