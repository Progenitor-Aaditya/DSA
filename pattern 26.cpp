#include<iostream>
using namespace std;
int main()
{
    int i,k,j,n;
    cin>>n;
    i=1;
    k=1;
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
        cout<<k;
        j++;
        k++;
    }
    cout<<endl;
    i++;
    }
}