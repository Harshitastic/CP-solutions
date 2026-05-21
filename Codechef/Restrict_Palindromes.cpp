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
    int T;
    cin >> T;
    while (T--){
        int N;
        cin >> N;
        string s ="abcde";
        for (int i = 0; i < N; i++) {
            cout<<s[i % 5];
        }
        cout<<endl;
    }
    return 0;
}

    
    