#include<iostream>
using namespace std;

int main(){
int i,s,j,d;
int k=1,m=20;

for(i=1;i<=5;i++){

for(s=1;s<=i;s++){
cout<<" ";
}
for(j=4;j>=i;j--){
cout<<""<<k;
k++;
}
cout<<"  ";
for(d=4;d>=i;d--){
cout<<m;
m--;
}
cout<<"\n";

}
}
