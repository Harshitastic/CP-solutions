#include <iostream>
#include <algorithm>
#include<cmath>
using namespace std;

long long cost(int x) {
    if(x==0) return 3;
    return (long long)1* (1LL*pow(3,x+1)+1LL*x*pow(3,x-1));
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--) {
        long long n,ans=0;
        cin>>n;
        while(n>0) {
            int k=0;
            while((long long)pow(3,k+1)<=n) k++;
            ans+=cost(k);
            n-=pow(3,k);
        }
        cout<<ans<<endl;
    }
}
