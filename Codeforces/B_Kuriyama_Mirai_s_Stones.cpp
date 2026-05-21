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
    
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(auto &it:a) cin>>it;
    ll m;
    cin>>m;
    vector<ll> pre1(n);
    pre1[0]=a[0];
    for(ll i=1;i<n;i++) pre1[i]=pre1[i-1]+a[i];

    vector<ll> pre2(n);
    sort(a.begin(),a.end());
    pre2[0]=a[0];
    for(ll i=1;i<n;i++) pre2[i]=pre2[i-1]+a[i];
    while(m--){
        ll type,l,r;

        cin>>type>>l>>r;
        l--;
        r--;
        if(type==1){
            cout<<pre1[r]-((l==0)? 0 :pre1[l-1])<<endl;
        }
        else{
            cout<<pre2[r]-((l==0)? 0 :pre2[l-1])<<endl;
        }

    }
    
    return 0;
}