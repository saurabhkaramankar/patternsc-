#include<iostream>
using namespace std;
int main(){
int i,j,n;
cout<<"Enter n";
cin>>n;
for(i=1;i<=5;i++){
for(j=5;j>=i;j--){
cout<<(char)(i+64);

}
cout<<"\n";
}

}
/*
AAAAA
BBBB
CCC
DD
E
*/
