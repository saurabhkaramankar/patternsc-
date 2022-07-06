#include<iostream>

using namespace std;

int main()
{

char k = 97;
for(int i=1;i<=5;i++)
{
 for(int j=1;j<=i;j++)
 {
  if(k%2 == 0)
  {
   cout<<(char)(k-32);
  }
  else
  {
   cout<<(char)(k);
  }
  k++;

 }
 cout<<"\n";
}
}
