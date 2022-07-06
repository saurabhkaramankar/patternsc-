#include<iostream>

using namespace std;

int main()
{
int i,j,r=5,count;
count = 0;
for(i=r;i>0;i--)
{
count+=i;
}
for(i=0;i<r;i++)
{
for(j=r;j>i;j--)
{
cout<<count;
count--;

}
cout<<endl;
}
}
