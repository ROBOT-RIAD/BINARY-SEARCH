#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int 
using namespace std;

bool aresame(double a,double b)
{
    return fabs(a-b)<1e-15;
}

int main() {
    int t;cin>>t;
    while(t--)
    {
        double n;cin>>n;
        double l=0.0;
        double r=n;
        while ((r-l)>=1e-15)
        {
            double mid=l+(r-l)/2;
            double val =mid*mid;
            if(aresame(val,n))
            {
                cout<<mid<<endl;
                break;
            }
            else if(val>n)
            {
                r=mid;
            }
            else
            {
                l=mid;
            }
        }       
    }
    return 0;
}