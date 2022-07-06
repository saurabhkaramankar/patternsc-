#include<iostream>
using namespace std;

int main(){
int n=0;
int i,j,k;
for(int i=1;i<=4;i++){
 n=n+i;
 k=n;
 for(int j=1;j<=i;j++){
 cout<<k;
 k--;
 }
 cout<<"\n";
}
}

