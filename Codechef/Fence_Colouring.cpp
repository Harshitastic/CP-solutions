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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> a(n);
        map<ll, ll> freq;
        for(ll i=0; i<n;i++) {
            cin >> a[i];
            freq[a[i]]++;
        }
        ll maxFreq=0;
        for (auto &p:freq) maxFreq=max(maxFreq, p.second);
        
        if(freq[1] ==maxFreq) 
            cout<<n -maxFreq <<"\n";
        else 
            cout<<1+(n - maxFreq) << "\n";
    }
    
    return 0;
}