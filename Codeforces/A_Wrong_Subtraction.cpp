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
    
    ll x,k;
    cin>>x>>k;
    ll count=0;
    while(count<k){
        if(x%10!=0){
            x=x-1;
        }
        else x=x/10;
        count++;
    }
    cout<<x;
    
    return 0;
}