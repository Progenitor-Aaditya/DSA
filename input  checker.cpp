#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter a character "<<endl;
    cin>>ch;
    int a = ch;
    
    if(48<=a&& a<=57)
    {
        cout<<"it is a Single - Digit number "<<endl;
    }
    else if(65<= a && a <=90)
    {
        cout<<"it is a Uppercase"<<endl;
    }
    else if(97<= a && a <=122)
    {
        cout<<"it is a Lowercase"<<endl;
    }
    else{
        cout<<"it is a Special character"<<endl;
    }
}