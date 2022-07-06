#include<iostream>

using namespace std;

int main()
{
 int i,j,s,N,count=0;

 N = 5;
 for(i=s;count<4;count++)
 {
 for(j=0;j<count+1;j++)
 {
 cout<<i;
 }
 cout<<"\n";
 i=i+1;
 }
 for(i=s+N-2;count>0;count--)
 {
 for(j=0;j<count-1;j++){
 cout<<i;
 }
 cout<<"\n";
 i=i-1;
 }

}
