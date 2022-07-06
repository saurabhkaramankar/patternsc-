#include<iostream>
using namespace std;
int main(){
int i,j,n;
cout<<"Enter n";
cin>>n;
for(i=5;i>=1;i--){
for(j=5;j>=1;j--){
cout<<j%i;

}
cout<<"\n";
}

}
/*
04321
10321
21021
10101
00000
*/
