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
        ll x,n;
        cin>>x>>n;
        ll final;
        ll rem=n%4;
        if(x%2==0){
            if(rem==0) final=x;
            if(rem==1) final=x-n;
            if(rem==2) final=x+1;
            if(rem==3) final=x+n+1;
        }
        else if(x%2!=0){
            if(rem==0) final=x;
            if(rem==1) final=x+n;
            if(rem==2) final=x-1;
            if(rem==3) final=x-n-1;
        }
        cout<<final<<endl;
    }
    
    return 0;
}