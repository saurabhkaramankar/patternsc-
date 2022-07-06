#include<iostream>

using namespace std;

int main()
{
    int i,j;
int n;
cin>>n;
int v=1;
for(i=2;i<=n;i++)
{
 for(j=1;j<=i;j++)
 {
  cout<<v;
  v++;
 }
 v=v-1;
 cout<<"\n";
}
}
