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
    
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(auto &it:a) cin>>it;
        sort(a.begin(),a.end());

        if(a[0]+a[n-1]<=k) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}