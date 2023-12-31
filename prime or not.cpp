#include<iostream>
using namespace std;
int main(){
    int i=2;
    int n,m;
    m= 0;
    cin>>n;
    while(i<n)
    {
        if(n%i==0)
        {
            cout<<"Number is not prime ";
            m++;
            break;
        }
        else{
            i++;
        }
    }
    if(m==0)
    {
        cout<<"Number is Prime";
    }
}