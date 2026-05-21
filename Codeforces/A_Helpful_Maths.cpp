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
    
    string s;
    cin>>s;
    int arr[s.length()];
    int k=0;
    for(int i=0;i<s.length();i=i+2 ) {
        arr[k]=s[i];
        k++;
    }
    sort(arr,arr+s.length());
    for(int i=0;i<s.length();i=i+1 ) {
        cout<<arr[i]<<"+";
    }

    return 0;
}