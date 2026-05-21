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
        string s;
        cin>>s;
        int x=s.size();
        if(s[0]!=s[x-1]){
            if(s[0]=='a'){
                s[0]='b';

            } 
            else s[0]='a';
        }
        cout<<s<<endl;
    }
    
    return 0;
}