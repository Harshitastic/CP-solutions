#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    if (s1.size() + s2.size() != s3.size()) {
        cout << "NO";
        return 0;
    }

    unordered_map<char,int> mpp, mpp1;

    for (char c : s1) mpp[c]++;
    for (char c : s2) mpp[c]++;
    for (char c : s3) mpp1[c]++;

    if (mpp == mpp1) cout << "YES";
    else cout << "NO";

    return 0;
}
