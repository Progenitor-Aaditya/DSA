#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    int i,j,k;
    k=1;
    i=1;
     while (i<=n)
     {
         j=1;
         while(j<=n)
         {
            cout<<k; 
            j++;
            k++;
         }
         cout<<endl;
         i++;
     }
}