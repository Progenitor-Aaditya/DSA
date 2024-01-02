#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cin>>n;
    i=1;
    while(i<=n)
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
        cout<<i;
        j++;
    }
    cout<<endl;
    i++;
    }
}