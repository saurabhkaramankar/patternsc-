#include<iostream>

using namespace std;

int main()
{
int r,c;
int i, j;
for(int i =1;i<=3;i++)
{
for(int j=1;j<=8;j++)
{
if((i+j)%4 == 0 || i == 2 || j%4 == 0)
{
cout<<"*";
}
}

cout<<"\n";
}

}
