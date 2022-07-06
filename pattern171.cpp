#include<iostream>

using namespace std;

int main()
{
int i,j,r,count,count1=3;
count=0;
cin>>r;
for(i=0;i<r;i++)
{
 if(i<=r/2)
 {
   count=count1;
   for(j=0;j<=i;j++)
   {
    count++;
   }
   count1 = count;
   for(j=0;j<=i;j++)
   {
    count--;
    cout<<count;
   }
   cout<<"\n";
}

else
{

 for(j=i;j<r;j++)
 {
  count--;
  cout<<count;
 }
 cout<<"\n";
}
}
}
