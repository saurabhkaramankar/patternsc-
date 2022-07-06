#include<iostream>
using namespace std;

int main(){
int i,j,k,n;
for(i=1;i<=5;i++){
        for(k=5;k>=i;k--)
        cout<<" ";
for(j=i;j>=0;j--){
cout<<j;

}
for(j=0;j<=i;j++){
cout<<j;
}
cout<<"\n";
}
}
