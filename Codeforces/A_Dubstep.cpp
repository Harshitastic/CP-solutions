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
    for(int i=0;i+2<s.size();i++){
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
            s[i]=s[i+1]=s[i+2]='.';
        }
        
    }
    bool space=false;
    for (char c:s){
        if(c=='.'){
            if(space) continue;
            cout<<" ";
            space=true;
        }
        else{
            cout<<c;
            space=false;
        }

    }
    cout<<endl;
    
    return 0;
}