#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int 
using namespace std;

int main() {
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        int x;cin>>x;
        int l=0,r=n-1;
        int ans=-1;
        while (l<=r)
        {
          int mid =l+(r-l)/2;
          if(v[mid]==x)
          {
            ans=mid;
            break;
          }
          if(x<v[mid])
          {
            r=mid-1;
          }
          else
          {
            l=mid+1;
          }
        }
        cout<<ans<<endl;     
    }
    return 0;
}