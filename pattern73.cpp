#include<iostream>
using namespace std;

int main(){
 int i,j,n;
 cout<<"Enter n";
 cin>>n;
 for(int i=1;i<=5;i++){
 for(int j=1;j<=5;j++){
        if(i<=j)
 cout<<"* ";
 else
    cout<<" ";
 }
 cout<<"\n";
 }
}
