#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int 
using namespace std;

int main() {
    int n,m;
    while(cin>>n>>m)
    {
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int l=0,r=INT_MAX,ans;
        while(l<=r)
        {
            int capacity=l+(r-l)/2;
            int sum=0;
            int container=1;
            for(int i=0;i<n;i++)
            {
                if(v[i]>capacity)
                {
                    container=INT_MAX;
                    break;
                }
                sum+=v[i];
                if(sum>capacity)
                {
                    container++;
                    sum=v[i];
                }
            }
            if(container<=m)
            {
                ans=capacity;
                r=capacity-1;
            }
            else
            {
                l=capacity+1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}