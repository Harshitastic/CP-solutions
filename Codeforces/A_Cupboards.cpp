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
    
    int n;
    cin>>n;

    int cnt1=0,cnt0=0,cnt_1=0,cnt_0=0;

    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        if(x==1) cnt1++;
        else cnt0++;
        if(y==1) cnt_1++;
        else cnt_0++;
    }
    cout<<min(cnt1,cnt0)+min(cnt_0,cnt_1);

    
    
    return 0;
}