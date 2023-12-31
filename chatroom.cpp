#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string a="hello";
    int c=0,b=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==a[c])
        {
            c++;
            b++;
        }

    }
    if(b==5)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
}