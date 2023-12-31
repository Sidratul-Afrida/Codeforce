#include<iostream>
using namespace std;
int main()
{
    float n;
    cin>>n;
    float i,count=0;
    for(i=1;i<=n;i++)
    {
        count+=(1/i);
    }
    cout<<count <<endl;

}