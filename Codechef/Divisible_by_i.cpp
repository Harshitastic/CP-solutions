#include<iostream>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n, count = 1;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                arr[i] = count;
            }
            else {
                arr[i] = n - count + 1;
                count++;
            }
        }

        for (int i = n - 1; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

}