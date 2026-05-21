#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int a[3];
        for (int i = 0; i < 3; i++) {
            cin >> a[i];   // ✅ read properly
        }

        int ans = 0;

        // primary colours
        for (int i = 0; i < 3; i++) {
            if (a[i] > 0) {
                ans++;
                a[i]--;
            }
        }

        sort(a, a + 3, greater<int>());

        // secondary colours
        if (a[0] > 0 && a[1] > 0) { ans++; a[0]--; a[1]--; }
        if (a[0] > 0 && a[2] > 0) { ans++; a[0]--; a[2]--; }
        if (a[1] > 0 && a[2] > 0) { ans++; a[1]--; a[2]--; }

        cout << ans << "\n";
    }
    
    return 0;
}
