#include<iostream>
using namespace std;
int main(){
int i,j,n;
cout<<"Enter n";
cin>>n;
for(i=1;i<=5;i++){
for(j=1;j<=i;j++){
    if(i==1|j==1|i==j|i==5)
cout<<j;
else
    cout<<" ";

}
cout<<"\n";
}

}
1
12
1 3
1  4
15555
