#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cin>>n;
    i=1;
    while(i<=n){
        j=1;
        char start='A'+i+j-2;//logic is that this line prints the starting character of each row
        while(j<=n)
        {
            cout<<start;
            start=start+1;//and this line here kepps incerasing the column element
            j++;
        }
        cout<<endl;
        i++; 
    }
}