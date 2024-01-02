#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cin>>n;
    i=n;
    while(i>=1)
    {
    
    int space =n-i;
    while(space)
    {
        cout<<" ";
        space--;
    }
    j=n-i+1;
    while(j<=n)
    {
        cout<<j;
        j++;
    }
    cout<<endl;
    i--;
    }
}