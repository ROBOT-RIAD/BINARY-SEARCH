#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int 
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, xK, yK, xQ, yQ;
        cin >> a >> b >> xK >> yK >> xQ >> yQ;

        int dx = abs(xK - xQ);
        int dy = abs(yK - yQ);

        if ((dx % a == 0 && dy % b == 0 && (dx / a + dy / b) % 2 == 0 && (dx / a) * 2 <= dx && (dy / b) * 2 <= dy) ||
            (dx % b == 0 && dy % a == 0 && (dx / b + dy / a) % 2 == 0 && (dx / b) * 2 <= dx && (dy / a) * 2 <= dy)) {
            int moves = max(dx / a, dy / b);
            cout << moves << endl;
        } else {
            cout << "0" << endl;
        }
    }

    return 0;
}