#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,j;
    char ch;
    i=1;
    while(i<=n)
    {
        j=65;
        while (j<=n+64)
        {
            ch=j;
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
    }
}