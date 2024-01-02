#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int 
using namespace std;

int main() {
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    int x;cin>>x;
    auto it =upper_bound(v.begin(),v.end(),x);
    int index=it-v.begin();
    cout<<index<<endl;
    return 0;
}