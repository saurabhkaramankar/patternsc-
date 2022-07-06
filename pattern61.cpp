#include<iostream>
using namespace std;
int main(){
int i,j,n,k;
cout<<"Enter n";
cin>>n;

for(i=1;i<=5;i++){
for(j=1;j<=5;j++){
if(i==j|i+j==6)
    cout<<'*';
else
    cout<<" ";
}
cout<<"\n";
}

}

X
