#include <iostream>

using namespace std;

int main()
{
   int i,sum=0,n;
   cin>>n;
   int a=0;
   int b=1;
   cout<<a<<" "<<b<<" ";
   for (i=1;i<=n;i++)
   {
       sum=a+b;
       cout<<sum<<" ";
       a=b;
       b=sum;
   }
}