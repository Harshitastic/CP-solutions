#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        bool valid = true;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] > k)
                valid = false;
        }

        if (valid)
        {
            int sum = 0, i = 0, count = 0;

            while (i < n)
            {
                sum = 0;
                while (i < n && sum + arr[i] <= k)
                {
                    sum += arr[i];
                    i++;
                }
                count++;
            }

            cout << count << '\n';
        }
        else
        {
            cout << "-1\n";
        }
    }

    return 0;
}
