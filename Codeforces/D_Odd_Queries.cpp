#include <iostream>
#include <vector>
#define ll long long

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        ll n, q;
        cin >> n >> q;
        vector<ll> arr(n + 1);
        vector<ll> prefix(n + 1, 0);

        for (int i = 1; i <= n; ++i) {
            cin >> arr[i];
            prefix[i] = prefix[i - 1] + arr[i];
        }

        ll total_sum = prefix[n];

        while (q--) {
            ll l, r, k;
            cin >> l >> r >> k;

            ll sum_lr = prefix[r] - prefix[l - 1];
            ll len = r - l + 1;
            ll new_sum = total_sum - sum_lr + len * k;

            if (new_sum % 2 == 1)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}
