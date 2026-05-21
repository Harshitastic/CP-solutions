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
	    int n,k;
	    cin>>n>>k;
	    vector<int> a(n);
	    for(auto &it:a) cin>>it;
        vector<int> motu,tomu;
        for(int i=0;i<n;i++){
            if(i%2!=0) 
                tomu.push_back(a[i]);
            else
                motu.push_back(a[i]);
        }
        sort(tomu.begin(),tomu.end());
        sort(motu.begin(),motu.end(),greater<int>());
        for(int i=0;i<tomu.size();i++){
            if(tomu[i]<motu[i] && k>0){
                swap(tomu[i],motu[i]);
                k--;
            }
        }
        ll sum1=0,sum2=0;
        for(int i=0;i<motu.size();i++){
            sum1+=motu[i];
        }
        for(int i=0;i<tomu.size();i++){
            sum2+=tomu[i];
        }

        if(sum2>sum1) cout<<"YES"<<endl;
        else cout<<"N0"<<endl;

        
	    
	}
    
    return 0;
}