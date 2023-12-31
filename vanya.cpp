#include<iostream>
using namespace std;
int main()
{
    int a,b,sum1=0,sum2=0;
    cin>>a>>b;
   
     int arr[a];
     
    
    for(int i=0;i<a;i++)
    {
         cin>>arr[i];
        if(arr[i]>b)
        {
          sum1+=2;
        }
        if(arr[i]<=b)
            {
                sum2++;
            }
    }
    cout<<sum1+sum2<<endl;
}