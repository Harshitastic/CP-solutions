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

int sum_digits(int n){
    int total=0;
    while(n>0){
        total+=n%10;
        n=n/10;

    }
    
    return total;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++) cin>>arr[i];
        int max_sum=0;
        for (int i = 0; i < n; i++){
            int key=arr[i];
            for (int j = i+1; j < n; j++)
            {
                int a=arr[i]*arr[j];
                int p=sum_digits(a);
                max_sum=max(max_sum,p);/* code */
            }
            
        }
        cout<<max_sum<<endl;

        
        
    }
    
    return 0;
}