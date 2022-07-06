#include<iostream>
using namespace std;
int main(){
int i,j,n,k;
cout<<"Enter n";
cin>>n;

for(i=1;i<=5;i++){
for(j=1;j<=5;j++){
if(i==3|j==3|(j==1&&i<=3|i==5&&j<=3)|(i==1&&i+j<4|j==5&&i+j<=8))
    cout<<'*';
else
    cout<<" ";
}
cout<<"\n";
}

}
