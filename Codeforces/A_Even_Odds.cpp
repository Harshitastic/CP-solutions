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
    
    ll n,k;
    cin>>n>>k;
    ll m;
    if(n%2==0){
        m=n/2;

    }
    else m=(n+1)/2;
    if(k<=m) cout<<(2*k)-1;
    else cout<<(2*(k-m));
    
    return 0;
}