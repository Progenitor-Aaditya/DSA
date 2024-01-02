#include<iostream>
using namespace std;
int main()
{
    int i,j,k,n;
    cin>>n;
    char ch;
    i=1;
    while(i<=n)
    {
        j=1;
        while(j<=n)
        {
            ch='A'+i+j-2;
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
    }
}