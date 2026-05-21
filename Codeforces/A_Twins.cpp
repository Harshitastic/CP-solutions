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
    int sum=0;

    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];

    }

    sort(a.begin(),a.end(),greater<int>());
    int sum1=0,cnt=0;
    for(int i=0;i<n;i++){
        sum1+=a[i];
        cnt++;
        if(sum1>(sum-sum1)){
            break;
        }

    }
    cout<<cnt<<endl;

    
    
        
    
    
    return 0;
}