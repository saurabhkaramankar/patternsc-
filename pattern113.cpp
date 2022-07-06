#include<iostream>
using namespace std;
int main(){
int i,j,k;

for(i=1;i<=5;i++){
        for(k=5;k>=i;k--)
        cout<<" ";
for(j=1;j<i;j++){
cout<<(char)(i+64);
}
for(j=i;j<=2*i-1;j++)
    cout<<(char)(j+64);
cout<<"\n";
}


}
