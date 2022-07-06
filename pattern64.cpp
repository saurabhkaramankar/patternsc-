#include<iostream>
using namespace std;
int main(){
int i,j,n,k;
cout<<"Enter n";
cin>>n;

for(i=1;i<=5;i++){
for(j=1;j<=5;j++){
if(j==1|j==5|i+j==6|i==j)
    if(i<=3&&j>=3)
    cout<<'*';
else
    cout<<" ";
}
cout<<"\n";
}

}
