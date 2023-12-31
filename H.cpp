#include<iostream>
#include<string>
using namespace std;
int main()
{  
  int i;
  string s;
  cin>>s;
  for(i=0; i<s.size(); i++)
  if(s[i] == 'H' || s[i] == 'Q' ||s[i] == '9')
  {
      cout<<"YES\n";
  }

 else
 {
    cout<<"NO\n";
 }
  
  return 0;
}