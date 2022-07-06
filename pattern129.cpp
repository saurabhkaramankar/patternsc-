#include<iostream>
using namespace std;

int main(){
int i,j,n=5;
int px = n;
int py = n;
for(i=1;i<=n;i++){

for(j=1;j<=2*n;j++)
if(j==px||j==py)
cout<<px;
else
cout<<" ";
px--;
py++;
cout<<"\n";
}
}
