#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++) cin >> arr[i];
        
        sort(arr, arr + n);

        // swap every adjacent pair starting from index 1
        for(int i = 1; i + 1 < n; i += 2) {
            swap(arr[i], arr[i + 1]);
        }

        for(int i = 0; i < n; i++) cout << arr[i] << " ";
        cout << "\n";
    }

    return 0;
}
