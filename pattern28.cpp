#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    i=1;
    while(i<=n){
    //print first inverted triangle
    int t1=1;
    while(t1<=n-i+1){
        cout<<t1;
        t1++;
    }
    //prints 2nd triangle
    int t2=1;
    while(t2<i){
        cout<<"*";
        t2++;
    }
    //prints 3rd triangle
    int t3= 1;
    while(t3<i)
    {
        cout<<"*";
        t3++;
    }
    //prints 4th triangle
    int t4= n-i+1;
    while(t4>=1)
    {
        cout<<t4;
        t4--;
    }
    cout<<endl;
    i++;
    }
    
}