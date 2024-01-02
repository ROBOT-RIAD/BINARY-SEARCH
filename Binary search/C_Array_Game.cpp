#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<long long> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        // Minimize the array by performing operations
        while (k > 0 && a[0] != 0) {
            // Perform the operation on the two smallest elements
            long long diff = a[1] - a[0];
            a[0] = diff;
            
            // Sort again to maintain the order
            sort(a.begin(), a.end());
            
            // Decrease the remaining operations
            k--;
        }

        // Output the result for the current test case
        cout << a[0] << endl;
    }

    return 0;
}
