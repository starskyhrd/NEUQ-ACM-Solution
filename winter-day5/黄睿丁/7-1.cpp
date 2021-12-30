#include <bits/stdc++.h>
using namespace std;
int a[1001];

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int sum=0,num=1;
    for(int i=0;i<n;i++)
    {
        if(a[i]-a[i-1]==1)
            num++;
        else if(a[i]-a[i-1]>1)
        {
            sum+=num-1;
            num=1;
        }
    }
    sum+=num-1;
    cout<<sum;
}
