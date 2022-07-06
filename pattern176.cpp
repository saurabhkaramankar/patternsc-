#include<iostream>

using namespace std;

int main()
{
int i,j,r,count;
cin>>r;

r=r/2;

count = r+2;

for(i=0;i<r;i++)
{
for(j=r;j>i;j--)
{
if(j!=r)
{
cout<<count<<"*";
}
else
{
cout<<count;
}
}
count--;
cout<<"\n";
}
count++;
for(i=0;i<r;i++)
{
  for(j=0;j<=i;j++)
  {
  if(j!=0){
  cout<<count<<"*";
  }
  else
  {
  cout<<count;
  }
  }
  count++;
  cout<<"\n";
  }

}
