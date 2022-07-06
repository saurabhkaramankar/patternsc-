#include<iostream>
using namespace std;

int main(){
for(int i=5;i>=1;i--){
for(int j=i;j<=5;j++){
if(j%4<=3)
cout<<j%2;
else
cout<<j%4;
}
cout<<"\n";
}
}
/*
1
01
010
1010
10101
