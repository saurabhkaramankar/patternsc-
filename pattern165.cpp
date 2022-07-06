#include<iostream>

using namespace std;

int main()
{
int i,j,r=5;

for(i=0;i<r;i++)
{
 if(i==0 || i==r-1)
 {
  for(j=0;j<3;j++)
  {
   cout<<"3";
  }
 }
 else
 {
 for(j=0;j<3;j++)
 {
  if(j==0 || j ==2)
  {
  cout<<"3";
  }
  else
  {
  cout<<i;
  }
 }
}
cout<<"\n";
}
}
