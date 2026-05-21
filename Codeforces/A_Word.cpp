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
    int lower=0,upper=0;
    for(int i=0;i<s.length();i++){
        if(islower(s[i])) lower++;
        else upper++;

    }
    if(lower>=upper){
        for(int i=0;i<s.length();i++){
            s[i]=tolower(s[i]);
        }
    }
    else{
        for(int i=0;i<s.length();i++){
            s[i]=toupper(s[i]);
        }

    }
    cout<<s; 
    return 0;
}