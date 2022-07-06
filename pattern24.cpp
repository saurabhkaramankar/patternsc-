#include<iostream>
using namespace std;
int main(){
int i,j,n;
cout<<"Enter n";
cin>>n;
for(i=1;i<=5;i++){
for(j=1;j<=5;j++){
cout<<j%i;

}
cout<<"\n";
}

}
/*
00000
10101
12012
12301
12340
*/
