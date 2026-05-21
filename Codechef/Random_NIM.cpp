#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#define ll long long

using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        bool ok = true;
        for (int i =0;i<n;i++) {
            int a;
            cin>> a;
            if (a>1) ok=false;
        }
        if (ok) {
            if (n%2==1) cout <<1<< "\n";
            else cout<<0<< "\n";
        } else {
            cout <<499122177 << "\n";
        }
    }
    return 0;
}

    
   