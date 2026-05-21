#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> h(n);
        for (int i = 0; i < n; ++i) {
            cin >> h[i];
        }

        int start = k - 1;
        int max_height = *max_element(h.begin(), h.end());
        bool canReach = false;

        for (int i = 0; i < n; ++i) {
            if (h[i] == max_height) {
                int teleport_time = abs(h[i] - h[start]);
                bool survive = true;
                for (int t = 0; t < teleport_time; ++t) {
                    int water_level = 1 + t;
                    if (water_level > h[start]) {
                        survive = false;
                        break;
                    }
                }
                if (survive) {
                    canReach = true;
                    break;
                }
            }
        }

        cout << (canReach ? "YES" : "NO") << "\n";
    }

    return 0;
}
