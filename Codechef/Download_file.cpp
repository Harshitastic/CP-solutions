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

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int sum=0;
        while(n--){
            int t,d;
            cin>>t>>d;
            if(t<=k){
                k=k-t;
            }
            else{
                sum+=(t-k)*d;
                k=0;

            }

        }
        cout<<sum<<endl;
    }
    
    return 0;
}