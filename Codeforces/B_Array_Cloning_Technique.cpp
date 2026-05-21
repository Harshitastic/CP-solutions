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
        ll n;
        cin>>n;
        int arr[n];
        for(ll i=0;i<n;i++) cin>>arr[i];
        map<ll,ll> freq;
        for(ll i=0;i<n;i++) freq[arr[i]]++;

        ll max_count=0;
        for(auto i:freq)
            max_count=max(max_count,i.second);

        ll op=0;
        while(max_count<n){
            op++;
            if(max_count * 2<=n){
                op+=max_count;
                max_count*=2;
            }
            else{
                op+=n-max_count;
                max_count=n;
            }

        }
        cout<<op<<endl;
    }
    
    return 0;
}