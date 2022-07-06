#include<iostream>
using namespace std;
int main(){
int i,j,n;
cout<<"Enter n";
cin>>n;
for(i=1;i<=5;i++){
for(j=5;j>=i;j--){
cout<<j;

}
cout<<"\n";
}

}

/*Output
54321
5432
543
54
5
*/
