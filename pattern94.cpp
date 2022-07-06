#include<iostream>
using namespace std;

int main(){
int i,j,n,px,py;
n=5;
px=n;
py=n;
for(i=1;i<=n;i++){
for(j=1;j<=2*n;j++){
if(j==px|j==py)
cout<<"*";
else
cout<<" ";
}
px--;
py--;
}

cout<<"\n";

}
