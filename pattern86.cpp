#include<iostream>
using namespace std;

int main(){
int k=97;
for(int i=1;i<=5;i++){
for(int j=1;j<=i;j++){
if(k%2==0)
cout<<" "<<k-32;
else
cout<<" "<<k;
k++;
}
cout<<"\n";
}
}
