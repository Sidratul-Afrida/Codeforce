#include<iostream>
using namespace std;
int main()
{
    int y;
    cin>>y;
    for(;;)
    {
        y++;
        int b=y/1000;
        int c=(y/100)%10;
        int d=(y/10)%10;
        int e=y%10;

        if(b!=c  && b!=d  && b!=e  && c!=d && c!=e && d!=e)
        {
            break;
        }
    }
    cout<<y<<endl;

}