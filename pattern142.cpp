#include<iostream>
using namespace std;

int main()
{
int n=9;
int px = n/2 + 1;
int i,j;
for(i=1;i<=n;i++){
for(j=1;j<=n;j++){
if(j==px || j==n-px+1)
{
cout<<px;
}
else
{
cout<<" ";
}
}
if(i<=n/2)
px--;
else
px++;
cout<<endl;
}
return 0;
}
