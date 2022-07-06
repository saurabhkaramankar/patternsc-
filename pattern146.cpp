#include<iostream>
using namespace std;

int main()
{
int i,j,k;
int n=5;

for(int i=1;i<=n;i++){
k = (i%2 == 0)?2 : 1;
for(int j=1;j<=i;j++)
{
cout<<k;
k+=2;
}
cout<<"\n";
}
}
