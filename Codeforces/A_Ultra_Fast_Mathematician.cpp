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
    
    string s1;
    cin>>s1;
    string s2;
    cin>>s2;
    string s3="";

    for(int i =0 ;i<s1.length();i++){
        if(s1[i]!=s2[i]) s3.push_back('1');
        else s3.push_back('0');
    }
    cout<<s3;
    
    return 0;
}