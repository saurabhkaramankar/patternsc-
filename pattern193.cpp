#include<iostream>

using namespace std;

int main()
{
int i,j,k;
k=1;
for(i=1;i<=5;i++)
{
 for(j=1;j<=2*i-1;j++)
 {
  cout<<" "<<k*k;
  k++;
 }
 cout<<"\n";
}
}
