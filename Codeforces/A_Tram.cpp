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
    ll count=0;
    ll max_count=0;
    for(int i=0;i<n;i++){
        ll x,y;
        cin>>x>>y;
        count=(count-x)+y;
        max_count=max(max_count,count);

    }
    cout<<max_count;
    
    return 0;
}