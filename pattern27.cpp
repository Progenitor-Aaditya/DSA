#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    i=1;
    while(i<=n){
        //print the spaces
        int space=n-i;
        while(space){
            cout<<" ";
            space--;
        }
        //print first triangle
        j=1;
        while(j<=i)
        {
            cout<<j;
            j++;
        }

        //print second triangle
        int start=i-1;
        while(start)
        {
            cout<<start;
            start--;
        }
        cout<<endl;
        i++;
    }
}