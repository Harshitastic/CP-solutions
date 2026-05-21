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
    ll cnt=0;
    while(n>0){
        int last_digit=n%10;
        n=n/10;
        if(last_digit==4 || last_digit==7) cnt++;
    }
    if(cnt==4 || cnt==7 ) cout<<"YES";
    else cout<<"NO";

    
    return 0;
}