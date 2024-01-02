#include<iostream>
using namespace std;
int main()
{
    int i,j,k,n;
    cin>>n;
    i=1;
    char ch;
    while(i<=n)
    {
        j=1;
        while(j<=i)
        {
         ch='A'+i+j-2;
         cout<<ch;
         j++;
        }
        cout<<endl;
        i++;
    }
    
}