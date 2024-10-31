#include <iostream>
using namespace std;

int n=5;

int main(int argc, char *argv[])
{
	for(int line=0;line<n;line++)
	{
		for(int i=0;i<n;i++)
		{
			if(i==n/2)
			  {
			  	cout<<"*" ;
			  }
			  else if(line == n/2)
			  {
			  	cout<<"*";
			  }
			  else
			  {
			  	cout<<" ";
			  }
		}
		cout<<"\n";
	}
	
}

   
  *
  *
*****
  *
  *

