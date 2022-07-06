#include<iostream>

using namespace std;

int main(){
int i,j,k;
int d1 = 1;
int n = 4;
int d2 = (n*n)+1;
for(i=n;i>=1;i--){
for(k=1;k<=i;k++){
cout<<d2<<" ";
d2++;
}// above for loop is executed until the condition becomes false
d2--;// its decremented to get the last printed value
d2 = d2-((i-1)*2);// used to set next printed value
cout<<endl;
}
return 0;
}
