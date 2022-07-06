#include<iostream>
using namespace std;
int main(){
int i,j,k,c;

for(i=5;i>=1;i--){
 c=1;
        for(k=5;k>=i;k--)
        cout<<" ";
for(j=1;j<=i;j++){

cout<<c<<" ";
c=c*(i-j)/j;
}

cout<<"\n";
}


}
