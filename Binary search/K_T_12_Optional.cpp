#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int 
using namespace std;

const double EPSILON = 1e-15;


double getdistance(ll ax,ll ay,ll bx,ll by)
{
    return sqrt(((ax-bx)*(ax-bx)+(ay-by)*(ay-by)));
}

bool isinside(ll ax,ll ay,ll px,ll py,double radians)
{
    double d=getdistance(ax,ay,px,py);
    return (radians-d)>EPSILON;
}

int main() {
    int t;cin>>t;
    while(t--)
    {
        ll px,py;cin>>px>>py;
        ll ax,ay;cin>>ax>>ay;
        ll bx,by;cin>>bx>>by;

        double l=0.0,r=LONG_MAX*1.0,ans=0;
        while((r-l)>EPSILON)
        {
            double radians=l+(r-l)/2;
            if(isinside(ax,ay,0,0,radians) && isinside(ax,ay,px,py,radians))
            {
                ans=radians;
                r=radians;
            }
            else if(isinside(bx,by,0,0,radians) && isinside(bx,by,px,py,radians))
            {
                ans=radians;
                r=radians;
            }
            else if(isinside(ax,ay,0,0,radians) && isinside(bx,by,px,py,radians) && ((2*radians)-getdistance(ax,ay,bx,by)) > EPSILON  )
            {
                ans=radians;
                r=radians;
            }
            else if(isinside(bx,by,0,0,radians) && isinside(ax,ay,px,py,radians) && ((2*radians)-getdistance(ax,ay,bx,by)) > EPSILON  )
            {
                ans=radians;
                r=radians;
            }
            else
            {
                l=radians;
            }

        }
        cout<<fixed<<setprecision(10)<<ans<<endl;
        
    }
    return 0;
}