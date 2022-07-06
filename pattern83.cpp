#include<iostream>
using namespace std;

int main(){
int i,j,k,n;
for(i=1;i<=4;i++){
for(j=1;j<=i;j++){
cout<<j;
}
for(k=3;k>=i;k--)
    cout<<"  ";
for(n=i;n>=1;n--)
    cout<<n;
cout<<"\n";
}

}
1      1
12    21
123  321
12344321
