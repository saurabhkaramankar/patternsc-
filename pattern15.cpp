#include<iostream>
using namespace std;

int main(){
int i,j,n;
cout<<"Enter n";
cin>>n;
for(int i=1;i<=n;i++){
for(int j=1;j<=i;j++){
cout<<1+(i-j);
}
cout<<"\n";
}
}
/*
1
21
321
4321
*/
