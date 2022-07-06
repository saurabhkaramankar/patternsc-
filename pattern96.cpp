#include<iostream>
using namespace std;

int main()
{
    int i,j,n;
    cin>>n;
for(int i=1;i<=n;i++)
{
for(j=1;j<=2*i-1;j+=2)
cout<<j;
for(j=(i-1)*2-1;j>=1;j-=2)
cout<<j;
cout<<" "<<"  \n";
}

}
