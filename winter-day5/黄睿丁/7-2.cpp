#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int b[n];
    int c[2*n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    int x,y,z;
    x=0;
    y=0;
    z=0;
    while(x<n&&y<n)
    {
        if(a[x]<b[y])
        {
            c[z++]=a[x++];
        }
        else
        {
            c[z++]=b[y++];
        }        
    }
    while(x<n)
    {
        c[z++]=a[x++];
    }
    while(y<n)
    {
        c[z++]=b[y++];
    }
    cout<<c[(z-1)/2];
}
