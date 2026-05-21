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
        int n,x;
        cin>>n>>x;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        int sum=x,max_sum=0;
        for(int i=0;i<n;i++){
            sum=sum+arr[i];
            max_sum=max(max_sum,sum);

        }
        cout<<max_sum<<endl;
    }
    
    return 0;
}