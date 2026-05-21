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
    
    ll k,n,w;
    cin>>k>>n>>w;

    ll sum=0;
    for(int i=1;i<=w;i++){
        sum+=i*k;
    }
    if(sum<=n) cout<<0;
    else cout<<sum-n;
    
    return 0;
}