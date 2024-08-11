#include<iostream>
#include<math.h>
using namespace std;
bool octvalid(int n)
{
    while(n>0)
    {
        int digit=n%10;
        if(digit>7)
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
    cout<<"Enter a octal Number :-";
    cin>>n;
    int rem,ans=0,i=0;  
    if (!octvalid(n)) 
    {
        cout << "Invalid octal number!";
    }  
    else
    {  
        while(n>0)
        {
            rem=n%10;
            ans=rem*pow(8,i)+ans;
            i++;
            n=n/10;
        }
        cout<<"Decimal Number is :- "<<ans;
    }
return 0;
}
