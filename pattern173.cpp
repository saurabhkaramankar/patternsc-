#include<iostream>

using namespace std;

int main()
{
 int i,j,l,count=0;
 cin>>l;
for(int i=0;i<l;i++)
{
  for(int j=0;j<l;j++)
  {
     count++;
     if(j==l-1)
     {
      cout<<count;
     }
     else
     {
      cout<<count<<"*";
     }
  }
   cout<<"\n";
 }
}

/*
5
1*2*3*4*5
6*7*8*9*10
11*12*13*14*15
16*17*18*19*20
21*22*23*24*25

[Program finished]
*/