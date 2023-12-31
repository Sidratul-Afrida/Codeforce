#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int A[100][100];
    int i,j,p=0,q=0,r=0;
     for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>A[i][j];
        }
        p+=A[i][0];
        q+=A[i][1];
        r+=A[i][2];
 }
 if(p==0 && q==0 && r==0)
 {
    cout<<"YES"<<endl;
 }
 
 else
 {
  cout<<"NO"<<endl;
 }
}