#include<iostream>

using namespace std;

int main(){
int n = 5;
int i, j;
for(i=n;i>=1;i--){
for(int s=i;s<=n-1;s++){
cout<<" ";
}
for(j=1;j<=i;j++)
{
if(i%2 != 0)
{
cout<<(char)(j+64);
}
else{
cout<<j;
}
}
cout<<endl;
}
}
