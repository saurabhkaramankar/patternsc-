#include<iostream>
using namespace std;
int main(){
int i,j,n,k;
cout<<"Enter n";
cin>>n;

for(i=1;i<=5;i++){
for(k=5; k>=i;k--)
    cout<<" ";
for(j=1;j<=i;j++){

    cout<<j;

}
cout<<"\n";
}
}
/*
      1
     12
    123
   1234
   */
