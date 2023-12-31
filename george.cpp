#include<iostream>
using namespace std;
int main()
{
  int n,c=0,p,q;
    cin>>n;
    while(n--)
    {
      cin>>p>>q;
      if(q-p>=2)
      {
        c++;
      }
    
      
    }
    if(c>=2)
    {
        cout<<c<<endl;
    }
    else
    {
       cout<<"0"<<endl; 
    }
    

   
}