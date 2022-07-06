#include<iostream>

using namespace std;

int main()
{
 int i,j,k,n,m=1,x=2;

 cin>>n;

 for(i=1;i<=n;i++)
 {
 for(j=1;j<=2*n;j++)
 {
  cout<<" ";
 }
 for(j=n;j>=i;j--)
 {
  cout<<" ";
 }
 for(k=1;k<2*i-1;k++)
 {
 cout<<"*";
 }
 cout<<"\n\t";
 }

 //middlepart

 for(i=3*n;i>=2*n;i--)
 {
 for(j=3*n;j>=i;j--)
 {
  cout<<" ";
 }
 for(k=1;k<=2*i-1;k++)
 {
  cout<<"*";
 }
 cout<<"\n\t";
 }

 //lowerpart

 for(i=n;i>=1;i--)
 {
  for(j=n+i;j>=i+m;j--)
  {
  cout<<" ";
  }
  for(k=1;k<=2*i-1;k++)
  {
   cout<<"*";
  }
  for(j=1;j<=2*m-1;j++)
  {
  cout<<"   ";
  }
  for(k=1;k<=2*i-1;k++)
  {
  cout<<"*";
  }
  m++;
  x--;

  cout<<"\n\t";
 }
}
