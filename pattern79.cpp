#include<iostream>
using namespace std;

int main(){
int i,j,k,n;
for(i=5;i>=1;i--){
 for(k=5;k>=i;k--)
 cout<<" ";
for(j=1;j<=i;j++){
cout<<(char)(j+64);
}
for(j=i;j>=1;j--){
cout<<(char)(j+64);
}
cout<<"\n";
}
}

ABCDEEDCBA
 ABCDDCBA
  ABCCBA
   ABBA
    AA
