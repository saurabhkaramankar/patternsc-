#include<iostream>
using namespace std;

int main(){
int n=6;
int i,j,c,k;

for(i=n;i>0;i-=2){
for(c=2;c>0;c--){
for(int x=i;x<n;x++){
cout<<" ";
}
for(j=0;j<i;j++){
cout<<"*";
}
cout<<endl;
}
}

}
