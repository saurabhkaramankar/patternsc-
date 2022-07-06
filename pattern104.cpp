#include<iostream>
using namespace std;

int main(){
int i,j,k=1;
for(i=1;i<=5;i++){
for(j=i;j<=5;j++)
{
k=2*j-1;
cout<<k;
}
for(j=1;j<i;j++){
k=2*j-1;
cout<<k;
}
cout<<"\n";
}
}

