#include<iostream>

using namespace std;

int main()
{
int i,j,l,c=0;
for(int i=1;i<l;i++)
{
for(j=1;j<l-1;j++)
{
cout<<c++;
}
}
for(i=0;i<l;i++)
{

for(j=0;j<l-1;j++)
{

    c++;
    if(j==l-1)
    {
        cout<<c;
    }
    else{
        cout<<c<<"*";
    }
}
c = c-2*l;
cout<<"\n";
}
}
