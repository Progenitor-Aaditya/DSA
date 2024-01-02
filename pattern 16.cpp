#include<iostream>
using namespace std;
int main()
{
    int i,j,k,n;
    cin>>n;
    i=1;
    k=65;
    char ch;
    while(i<=n)
    {
        j=1;
        while(j<=i)
        {
         ch=k;
         cout<<ch;
         j++;
         k++;
        }
        cout<<endl;
        i++;
    }
    
}