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
            ch='A'+i+j-2; //this logic does not belong to me , though i did understand i did not get its creation
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
    }
}
