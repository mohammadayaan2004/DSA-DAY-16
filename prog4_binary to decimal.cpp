#include<iostream>
#include<cmath>
using namespace std;
bool binvalid(int n)
{
    while(n>0)
    {
        int digit=n%10;
        if(digit>1)
        {
        return false;
        }
        n=n/10;
    }
    return true;
}
int main()
{
    int n;
    cout<<"Enter a Binary Number :-";
    cin>>n;
    int rem,ans=0,i=0;
    if (!binvalid(n)) 
    {
        cout <<"Invalid Binary number!";
    } 
    else
    {
    while(n>0)
    {
        rem=n%10;
        n=n/10;
        ans=rem*pow(2,i)+ans;
        i++;
    }
    cout<<"Decimal Number is :- "<<ans;
    }
return 0;
}
