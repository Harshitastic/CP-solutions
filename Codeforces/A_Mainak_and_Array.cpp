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
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        int max_diff=0;
        for(int i=1;i<n;i++){
            max_diff=max(max_diff,arr[i]-arr[0]);

        }
        for(int i=0;i<n-1;i++){
            max_diff=max(max_diff,arr[n-1]-arr[i]);

        }
        for(int i=0;i<n-1;i++){
            max_diff=max(max_diff,arr[i]-arr[i+1]);

        }
        cout<<max_diff<<endl;

    }
    
    return 0;
}