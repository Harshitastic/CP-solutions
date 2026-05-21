#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> A(n), B(n);
        for (int i = 0; i < n; i++) cin >> A[i];
        for (int i = 0; i < n; i++) cin >> B[i];

        vector<int> p(n + 2, 0), both(n + 2, 0);

        for (int i = 0; i < n; i++) {
            if (A[i] == B[i]) {
                both[A[i]]++;
                p[A[i]] += 2;
            } else {
                p[A[i]]++;
                p[B[i]]++;
            }
        }

        int candidate1 = 0;
        while (p[candidate1] > 0) candidate1++;

        vector<int> L;
        for (int x = 0; x < candidate1; x++) {
            if (p[x] >= 1 && both[x] == 0) L.push_back(x);
        }

        int candidate2 = (L.size() >= 2) ? L[1] : n + 1;

        cout << min(candidate1, candidate2) << "\n";
    }
    return 0;
}
