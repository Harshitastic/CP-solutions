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
    string s;
    cin>>s;
    int a=0,d=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='A') a++;
        else d++;
    }
    if(a>d)cout<<"Anton";
    else if(a<d) cout<<"Danik";
    else cout<<"Friendship";
    
    return 0;
}