#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int n,m[100000],i,k,sum[100000];
    cin>>n;
    for(i=0;i<n;i++)
        cin>>m[i];
    for(i=0;i<n;i++)
    {
        for(k=1;k<m[i];k++)
            if(m[i]%k==0)
                sum[i] += k;
    }
    for(i=0;i<n;i++)
    {
        if(sum[i]==m[i])
            cout<<"P"<<endl;
        else if(sum[i]<m[i])
            cout<<"D"<<endl;
        else
            cout<<"A"<<endl;
    }
}
