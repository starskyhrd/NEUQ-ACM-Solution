#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int a[101],b[10000001],c[101];
int main()
{
    
    int n,i,j;
    while(cin>>n)
    {
        memset(b,0,n+1);
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        sort(a+1,a+1+n);
        for(i=1;i<n;i++)
        {
            cout<<a[i]<<" ";
            b[a[i]]=i;
        }
        cout<<a[i]<<endl;
            b[a[i]]=i;
        int m;
        cin>>m;
        for(i=0;i<m;i++)
        {
            cin>>c[i];
        }
        for(i=0;i<m-1;i++)
            cout<<b[c[i]]<<" ";
        cout<<b[c[i]]<<endl;
    }
}
