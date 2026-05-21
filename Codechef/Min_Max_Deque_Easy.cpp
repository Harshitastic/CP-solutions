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
        int n,q;
        cin>>n>>q;
        vector<int> a(n);
        for(auto &it:a) cin>>it;

        int l=a[0],r=a[0];
        for(int i=1;i<n;i++){
            if(i%2==0){
                if(l<=r) l=a[i];
                else r=a[i];
            }
            else{
                if(l>=r) l=a[i];
                else r=a[i];

            }
        }
        cout<<min(l,r)<<endl;
    
    
    }
    return 0;
}