#include<iostream>
using namespace std;

int main(){
int n= 10;
int i,j,k;
for(i=1;i<=n;i++){
k=i;
for(j=1;j<=i;j++){
cout<<k<<" ";
k = k+(n-j);
}
cout<<"\n";
}
}
