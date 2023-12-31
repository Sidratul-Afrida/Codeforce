#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
   string s;
   cin>>s;
   int i, count =0,count1=0;
   for(i=0;i<n;i++)
   {
    if(s[i]=='A')
    {
        count++;
    }
    else if(s[i]=='D')
    {
        count1++;

    }
   }
   if(count>count1)
   {
    cout<<"Anton"<<endl;
   }
   else if(count<count1)
   {
    cout<<"Danik"<<endl;
   }
   else
   {
    cout<<"Friendship"<<endl;
   }



    
}