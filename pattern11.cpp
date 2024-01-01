#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,j;
    char ch;
    i=65;
    while(i<=n+64)
    {
        j=1;
        while (j<=n)
        {
            ch=i;
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
    }
}