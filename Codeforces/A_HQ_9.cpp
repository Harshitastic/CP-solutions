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
    
    string s;
    cin>>s;
    int ans=0;

    for(int i=0;i<s.length();i++){
        if(s[i]=='H' ||s[i]=='Q' ||s[i]=='9' ){
            ans=1;
            break;

        }
        
    }
    if(ans) cout<<"YES";
    else cout<<"NO";
    
    return 0;
}