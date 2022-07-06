#include<iostream>
using namespace std;

int main()
{
int n=9;
int p =1;
int px = n/2 + 1;
int i,j;
for(i=1;i<=n;i++){
for(j=1;j<=n;j++){
if(j==px || j==n-px+1)
{
cout<<(char)(p+64);
}
else
{
cout<<" ";
}
}
if(i<=n/2){
px--;
p++;
}
else{
px++;
p--;
}
cout<<endl;
}
return 0;
}
