#include<iostream>
using namespace std;
int main()
{
  string s;
  cin>>s;
  int i,count=0,count1=0,p=0;
  for(i=0;i<s.size();i++)
  {
     if(s[i]=='1')
     {
         count++;
         count1=0;
     }
     else
     {
        count1++;
        count=0;
     }
  
     if(count>=7 || count1>=7)
     {
        p=1;
     }
     
  } 
  if(p==1)
  {
     cout<<"YES"<<endl;
  }
  else{
    cout<<"NO"<<endl;
  }
     
     
  
}