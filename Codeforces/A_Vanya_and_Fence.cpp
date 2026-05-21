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
    
    ll n,h;
    cin>>n>>h;

    vector<ll> a(n);
    ll width=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>h) width+=2;
        else width+=1;

    }
    cout<<width;


    
    return 0;
}