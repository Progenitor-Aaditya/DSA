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
    j=1;
    while(j<=i)
    {
        cout<<n-i+1;
        j++;
    }
    cout<<endl;
    i--;
    }
}