#include<iostream>
using namespace std;

int main(){

for(int i=1;i<=5;i++){
for(int k=5;k>=i;k--)
cout<<" ";
for(int j=i;j>=1;j--){
cout<<j;
}
for(int l=2;l<=i;l++)
{
    cout<<l;
}
cout<<"\n";
}
for(int i=4;i>=1;i--){
for(int k=5;k>=i;k--)
cout<<" ";
for(int j=i;j>=1;j--){
cout<<j;
}
for(int l=2;l<=i;l++)
{
    cout<<l;
}
cout<<"\n";
}
}
