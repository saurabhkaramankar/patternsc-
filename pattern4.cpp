 #include<iostream>
using namespace std;

int main(){
    int i,j,n;
    char ch;
    cout<<"Enter the number";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<(char)(64+i);
        }
        cout<<"\n";
    }
    return 0;
}

/*
AAAAA
BBBBB
CCCCC
DDDDD
EEEEE
*/
