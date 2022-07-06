#include<iostream>

using namespace std;
int main()
{
 int n,k;
 cin>>n;
 for(int i=1;i<=n;i++)
 {
  k=i;
  for(int j=1;j<=6-i;j++)
  {
   cout<<k;
   k = k+5-j;
  }
  cout<<"\n";
 }
}
