#include<iostream>
using namespace std;
int main()
{
    int n;
    float c,sum=0;
    cin>>n;
    int i,arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum = sum + arr[i];
        c= sum/n;
    }
    cout<<c<<endl;

    
}