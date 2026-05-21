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
	    int a,b,p,q;
	    cin>>a>>b>>p>>q;
	    bool possible=false;
	    if(p%a==0 && q%b==0){
	        if(abs((p/a)-(q/b))==1) possible=true;
            else if(abs((p/a)-(q/b))==0 ) possible=true; 
	    }
	    if(possible) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
    
    return 0;
}