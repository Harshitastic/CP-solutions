#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <string>
#include <numeric>
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
        int n;
        cin>>n;
        vector <int> arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        int k=abs(arr[0]-1);
        int g=1;

        for(int i=0;i<n;i++){
            g=__gcd(g,abs(arr[i]-(i+1)));


         }
         cout<<g<<endl;

    }
    
    return 0;
}