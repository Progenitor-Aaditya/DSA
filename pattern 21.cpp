#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cin>>n;
    i=1;
    while(i<=n)
    {
    /*
    int space =n-i;
    while(space)
    {
        cout<<" ";
        space--;
    }*/
    j=n;
    while(j>=i)
    {
        cout<<"*";
        j--;
    }
    cout<<endl;
    i++;
    }
}