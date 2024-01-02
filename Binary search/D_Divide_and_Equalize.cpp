#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int 
using namespace std;

int main() {
    int t;cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        vector<ll> v(n);
        for(ll i=0;i<n ;i++)cin>>v[i];
        ll l=0,r=LONG_MAX;
        bool flag=false;
        while(l<=r)
        {
            ll mid=l+(r-l)/2;
            double ans=1.0;
            for(ll i=0;i<n;i++)
            {
                ans*=(v[i]*1.0/mid);
            }
            if(fabs(ans-1.0)<1e-15)
            {
                flag=true;
                break;
            }
            else if(ans>1.0)
            {
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }       
    }
    return 0;
}