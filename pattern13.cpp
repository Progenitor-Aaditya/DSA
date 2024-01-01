#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,k,j;
    char ch;
    i=1;
    k=65;
    while(i<=n)
    {
        j=1;
        while (j<=n)
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