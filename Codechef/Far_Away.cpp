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
        ll n,m;
        cin>>n>>m;
        ll arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        ll max_sum=0;
        for(int i=0;i<n;i++){
            max_sum+=max(abs(arr[i]-1),abs(arr[i]-m));
        }
        cout<<max_sum<<endl;

    }
    
    return 0;
}