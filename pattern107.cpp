#include<iostream>
using namespace std;
int main(){
int i,j,k;

for(i=1;i<=5;i++){
        for(k=5;k>=i;k--)
        cout<<" ";
for(j=1;j<i;j++){
cout<<j;
}
for(j=i;j<=2*i-1;j++)
    cout<<j;
cout<<"\n";
}

for(i=5;i>=1;i--){
        for(k=5;k>=i;k--)
        cout<<" ";
for(j=1;j<i;j++){
cout<<j;
}
for(j=i;j<=2*i-1;j++)
    cout<<j;
cout<<"\n";
}
}
