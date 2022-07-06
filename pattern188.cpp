#include<iostream>

using namespace std;

int main()
{
int wH ; int wL;
 wH = wL = 4;
 wH = wH - 1;
 int x = wH;
 for(int i=0; i<=wH;i++)
 {
  for(int j=0; j<= wH*wL*2; j++)
  {
   if(j%(wH*2) == x || j%(wH*2) == wH+i)
    {
     cout<<"1";
    }
  else
  {cout<<" ";}
  }
  x--;
  cout<<endl;
  }
 }
