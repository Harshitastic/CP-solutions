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
        ll n;
        cin>>n;
        ll c0=0,c1=0;
        ll arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==1) c1++;
            else if(arr[i]==0) c0++;
        }
        ll ways=pow(2, c0)*c1;
        cout<<ways<<endl;
    }
    
    return 0;
}