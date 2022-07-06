#include<iostream>
using namespace std;

int main(){
int i,j,n=5;
int px = 1;
int py = n*2-1;
for(i=1;i<=n;i++){

for(j=1;j<=2*n;j++){
if(j==px||j==py){
cout<<"*";
}
else{
cout<<" ";
}
}
px++;
py--;

cout<<"\n";
}
}

