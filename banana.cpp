#include<iostream>
using namespace std;
int main()
{
    int k,n,w;
    int sum=0,i;
    cin>>k>>n>>w;
    for(i=1;i<=w;i++)
    {
        sum+=i;
    }
    int f=(sum*k)-n;
    if(f<0)
    {
        cout<<"0"<<endl;
    }
    else
    {
        cout<<f<<endl;
    }
}