#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int 
using namespace std;

bool isvalid(int dif,int a[],int n,int c)
{
    int cnt=1;
    int last=0;
    for(int i=1;i<n;i++)
    {
        if(abs(a[i]-a[last])>=dif)
        {
           cnt++;
           last=i;
        }
    }
    return cnt>=c;
}
int main() {
    int t;cin>>t;
    while(t--)
    {
        int n,c;cin>>n>>c;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int l=0,r=INT_MAX,ans;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(isvalid(mid,a,n,c))
            {
                ans=mid;
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        cout<<ans<<endl;
        
    }
    return 0;
}