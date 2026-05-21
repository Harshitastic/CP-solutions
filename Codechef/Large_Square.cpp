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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);



    code goes here
        int t;
        cin >> t;
        while (t--)
        {
            int n, a;
            cin >> n >> a;
            n = int(sqrt(n));
            cout << a * n << endl;
        }
    }

    return 0;
}