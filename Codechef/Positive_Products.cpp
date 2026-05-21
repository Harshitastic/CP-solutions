#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;
        long long arr[n];
        long long pos = 0, neg = 0;
        
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            if(arr[i] > 0) pos++;
            else if(arr[i] < 0) neg++;
        }
        
        long long posPairs = pos * (pos - 1) / 2;
        long long negPairs = neg * (neg - 1) / 2;
        
        cout << posPairs + negPairs << '\n';
    }
    
    return 0;
}
