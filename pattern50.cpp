#include<iostream>
using namespace std;
int main(){
int i,j,n;
cout<<"Enter n";
cin>>n;
for(i=1;i<=5;i++){
for(j=1;j<=i;j++){
    if(i==1|j==1|i==j|i==5)
cout<<'*';
else
    cout<<" ";

}
cout<<"\n";
}

}
*
**
* *
*  *
*****
