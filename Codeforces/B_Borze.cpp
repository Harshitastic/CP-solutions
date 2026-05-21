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

    for(int i=0;i<s.length();){
        if(s[i]=='.'){
            cout<<0;
            i++;
        }
        else if(s[i]=='-'){
            if(s[i+1]=='.'){
                cout<<1;
                i+=2;
            
            }
            else{
                cout<<2;
                i+=2;
            }
        }
    }
    return 0;
}