#include <iostream>
#include <vector>
#include <climits>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            a[i] = abs(a[i]);
        }
        ll min_ele = LLONG_MAX, max_ele = LLONG_MIN;
        ll min_idx = -1, max_idx = -1;
        for (ll i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                if (a[i] < min_ele)
                {
                    min_ele = a[i];
                    min_idx = i;
                }
            }
            else
            {
                if (a[i] > max_ele)
                {
                    max_ele = a[i];
                    max_idx = i;
                }
            }
        }
        if (max_ele > min_ele && min_idx != -1 && max_idx != -1)
        {
            swap(a[min_idx], a[max_idx]);
        }
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            if (i % 2 == 0)
                sum += a[i];
            else
                sum -= a[i];
        }
        cout << sum << "\n";
    }
    return 0;
}
