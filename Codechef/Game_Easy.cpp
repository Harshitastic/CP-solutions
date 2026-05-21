#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

typedef long long ll;

const int MAXN = 2005;

ll a[MAXN];
ll pre[MAXN];
ll ans[2 * MAXN];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a, a + n, greater<ll>());

        pre[0] = 0;
        for (int i = 1; i <= n; i++) {
            pre[i] = pre[i - 1] + a[i - 1];
        }

        int kmax = 2 * n;

        for (int k = 1; k <= kmax; k++) {
            ll best = LLONG_MIN;
            int l = (k + 1) / 2;
            int r = min(k, n);

            for (int x = l; x <= r; x++) {
                int t = 2 * x - k;
                ll bonus = ((ll)x * (x - 1) - (ll)t * (t - 1)) / 2;
                ll total = pre[x] + bonus;
                if (total > best) {
                    best = total;
                }
            }

            ans[k] = best;
        }

        for (int k = 1; k <= kmax; k++) {
            cout << ans[k];
            if (k < kmax) cout << " ";
        }
        cout << "\n";
    }

    return 0;
}
