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
        ll a,b,c;
        cin>>a>>b>>c;

        bool possible=false;
        ll a1=2*b-c;
        if(a1/a>0 && a1%a==0) possible=true;

        ll b1=(a+c)/2;
        if(b1/b>0 && b1%b==0 && (a+c)%2==0) possible=true;

        ll c1=(2*b)-a;
        if(c1/c>0 && c1%c==0) possible=true;

        if(possible) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}