#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for(int i = 0; i < n; i++) cin >> arr[i];

        int ans = 0;
        for(int i = 0; i < n; i++) {
            if(arr[i] <= x) ans++;
            else {
                ans += (arr[i] + x - 1) / x;
            }
        }

        sort(arr.begin(), arr.end());
        cout << min(arr[n-1], ans) << '\n';
    }

    return 0;
}
