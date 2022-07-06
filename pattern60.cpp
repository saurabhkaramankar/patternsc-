#include<iostream>
using namespace std;
int main(){
int i,j,n,k;
cout<<"Enter n";
cin>>n;

for(i=5;i>=1;i--){
for(k=1;k<=i;k++)
        cout<<" ";
for(j=i;j<=5;j++){
    cout<<" "<<j;
}

cout<<"\n";
}
}
   5
  4 5
3  4 5
