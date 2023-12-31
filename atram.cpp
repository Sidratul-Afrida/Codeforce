#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,a,b,c=0,d=0;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        c=(a+d)-b;
        if(c<0)
        {
            d=0;
        }
        else
        {
            d=c;
        }

    }
    cout<<d<<endl;
}