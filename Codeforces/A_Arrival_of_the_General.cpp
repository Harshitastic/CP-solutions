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
    vector<int> a(n);
    int min_ele=INT_MAX;
    int max_ele=INT_MIN;
    int max_idx,min_idx;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>max_ele){
            max_idx=i;
            max_ele=a[i];
        }
        if(a[i]<=min_ele){
            min_idx=i;
            min_ele=a[i];
        }

    }
    cout<<max_idx+((max_idx>min_idx)? n-2-min_idx: n-1-min_idx);


    
    return 0;
}