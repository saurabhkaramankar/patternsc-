#include<iostream>
using namespace std;

int main()
{
int i,j,k,l,n;
cin>>n;
cout<<1<<" ";
cout<<endl;
int num=1;
int num1 =1;
for(i=1;i<=n;i++){
for(j=0;j<=i;j++){
if(j==0|j==i){
cout<<num;
}
else{
cout<<num1;
}
}
num1=num;
num=num*2;
cout<<"\n";
}
}
