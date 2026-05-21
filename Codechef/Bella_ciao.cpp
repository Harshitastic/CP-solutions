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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {

        ll D,d,P,Q;
        cin>>D>>d>>P>>Q;

        if(D%d==0){
            ll m=D/d;
            cout<<d*(m*P + (Q*(m-1)*m)/2)<<endl;
        }
        else{
            ll m=D/d;
            ll y=(D%d)*(P+m*Q);
            cout<<y+d*(m*P + (Q*(m-1)*m)/2)<<endl;
        }

    }
    return 0;
}
