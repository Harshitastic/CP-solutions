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
    int x=0;
    
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s[0]=='+' || (s[0]=='X' && s[2]=='+' )) x++;
        else x--;
    }
    cout<<x<<endl;
    
    return 0;
}