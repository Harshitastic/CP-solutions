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
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;

        vector<ll> a(n);
        for(auto &it:a) cin>>it;

        ll even=0;
        ll ans=INT_MAX;

        for(int i=0;i<n;i++){
            if(a[i]%2==0) even++;
            if(a[i]%k==0) ans=0;
            ans=min(ans, k-a[i]%k);
        }

        if(k==4){
            if(even>=2) ans=0;
            else if(even==1) ans=min(ans,1ll);
            else ans=min(ans,2ll);
        }
        cout<<ans<<endl;
    }
    
    return 0;
}