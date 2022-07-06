#include<iostream>

using namespace std;

int main()
{
for(int i=1;i<=15;i++)
{
 for(int j=1;j<=10;j++)
 {
  if((i>=4 && i<=6) && (j>=4) ||  ((i>=10) && (i<=12) && (j<=7)))
  {
    cout<<" ";
  }
  else
  {
  cout<<"*";
  }
 }
 cout<<"\n";
}
}
