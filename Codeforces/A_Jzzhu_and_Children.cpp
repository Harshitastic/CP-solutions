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
    
    int n,m;
    cin>>n>>m;
    int a[n];
    int maxx=1,count=0,last_idx=n-1;

    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=n-1;i>=0;i--){
        if(ceil(a[i]*1.0/m)>maxx){
            maxx=ceil(a[i]*1.0/m);
            last_idx=i;
            
        }
    }  
    cout<<last_idx+1;  


    
    return 0;
}