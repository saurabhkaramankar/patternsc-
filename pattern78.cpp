#include<iostream>
using namespace std;

int main(){
int i,j,k,n;
for(i=1;i<=5;i++){
        for(k=i;k<=5;k++)
        cout<<" ";
for(j=i;j>=1;j--){
cout<<(char)(j+64);

}
for(j=1;j<=i;j++){
cout<<(char)(j+64);
}
cout<<"\n";
}
}
