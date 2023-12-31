#include<iostream>
using namespace std;
int main()
{
    int a ;
    cout<<"enter value of A "<<endl;
    cin>>a;
 
    if(a>0)
    {
        cout<<"A is a Positive number"<<endl;
    }
    else {
        if(a<0)
        {
            cout<<"A is a negative number"<<endl;
        }
        else{
            cout<<"A is zero"<<endl;
        }
    }
}