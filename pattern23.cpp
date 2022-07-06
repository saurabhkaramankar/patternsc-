#include<iostream>
using namespace std;
int main(){
int i,j,n;
cout<<"Enter n";
cin>>n;
for(i=5;i>=1;i--){
for(j=5;j>=i;j--){
cout<<j%i;

}
cout<<"\n";
}

}
/*
0
10
210
1010
00000
*/
