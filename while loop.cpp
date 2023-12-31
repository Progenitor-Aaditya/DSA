#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
   /* int i=1; //display all numbers from 0 - n
    while(i<=n)
    {
        cout<<i<<"  ";
        i++;
    }*/
    
    /*int sum=0; // sum of all numbers from 0 to n
    int i=0;
    while (i<=n)
    {
        sum=sum+i;
        i++;
    }
    cout<<sum;
    */
    
    int i=0;
    int sum =0;
    while (i<=n)
    {
        if(i%2==0){
            sum= sum+i;
        }
        i++;
    }
    cout<<"sum of all even numbers upto n is   "<<sum;
}