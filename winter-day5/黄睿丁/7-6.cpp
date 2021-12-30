#include<bits/stdc++.h>
using namespace std;
int a[100010],maxn,n,k;
int judge(int x)
{
 int num=1,s=a[1];
 for(int i=2;i<=n;i++)
  if(a[i]-s>=x)
  {
   s=a[i];num++;
   if(num>=k)
    return 1;	
  }	
 return 0;
}
int main()
{
 ios::sync_with_stdio(false);
 cin>>n>>k;
 for(int i=1;i<=n;i++)
  cin>>a[i];
 sort(a+1,a+n+1);
 int l=0,r=a[n-1],mid;
 while(l<=r)
 {
 	mid=(l+r)/2;
 	if(judge(mid))
 	{
 	 l=mid+1;maxn=mid;	
	}
	else r=mid-1; 
 }
 cout<<maxn;
 return 0; 
} 


