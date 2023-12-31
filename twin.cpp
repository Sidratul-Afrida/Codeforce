#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,j, arr[n];
    int a=0,b=0,c=0;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        a+=arr[i];
    }
    a=a/2;
    sort(arr,arr+n);
    for(j=n-1;j>=0;j--)
    {
        b+=arr[j];
        c++;
        if(a<b)
        {
            break;
        }
    }
    cout<<c<<endl;
    
}