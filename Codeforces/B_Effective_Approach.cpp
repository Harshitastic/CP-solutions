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
    vector<ll> pos(n+1);
    for(ll i=1;i<=n;i++){
        int x;
        cin>>x;
        pos[x]=i;
    }

    ll m;
    cin>>m;
    ll vasya=0,petya=0;
    while(m--){
        ll b;
        cin>>b;
        vasya+=pos[b];
        petya+=n-pos[b]+1;

        
    }
    cout<<vasya<<" "<<petya;

    
    
    return 0;
}