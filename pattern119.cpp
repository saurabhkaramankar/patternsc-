#include<iostream>
using namespace std;

int main(){
int i,j,k,N;
cin>>N;
for(i=1;i<=N;++)
{
for(j=1;j<=N;j++)
{
min = i<j ? i : j;
cout<<N-min+1;
}
for(j=N-1;j>=1;j--)
{
min = i<j ? i : j;
cout<<N-min+1;
}
cout<<"/n";
}
}
