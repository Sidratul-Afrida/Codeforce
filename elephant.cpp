#include<iostream>
using namespace std;
int main()
{
    int x,count;
    cin>>x;
    if(x%5==0)
    {
        count=x/5;
    }
    else
    {
    
    
    count=(x/5)+1;
    }
    cout<<count<<endl;

}