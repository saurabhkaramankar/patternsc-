#include<iostream>

using namespace std;

int main()
{
int i,j,r,count,count1;
count=2;
cin>>r;
for(i=0;i<r;i++)
{
 if(i<=r/2)
 {
   count1=count+1;
   for(j=0;j<=i;j++)
   {
    count++;
    cout<<count;
   }
   cout<<"\n";
}

else
{
 count=count1-(r-i);
 count1=count;
 for(j=i;j<r;j++)
 {
  cout<<count;
  count++;
 }
 cout<<"\n";
}
}
}
