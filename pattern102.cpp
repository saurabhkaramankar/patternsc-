#include<iostream>
using namespace std;

int main()
{
 int n=1;int j;
 for(int i=1;i<=4;i++){
 if(i%2 == 1)
 {
 for(int j=1;j<=i;j++){
 cout<<n++;
 }
 }
 else{
  n=n+i-1;
  for(j=1;j<=i;j++){
  cout<<n--;
 }
 }
 n=n+i-1;

 cout<<"\n";
}
}
