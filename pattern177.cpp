#include<iostream>

using namespace std;

int main()
{
 int i,j,r=5;
 for(i=0;i<r;i++)
 {
  if(i<=(r/2))
   {
     for(j=0;j<=i;j++)
     {
       if(j!=0)
        {
           cout<<i+1<<"*";
        }
      else
       {
         cout<<i+1;
       }
  }
}

else
   {
     for(j=i;j<r;j++)
     {
       if(j!=i)
        {
           cout<<r-i<<"*";
        }
      else
       {
         cout<<r-i;
       }
   }
}

cout<<"\n";
}
}
