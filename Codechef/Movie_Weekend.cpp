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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int l[n];
        int r[n];
        for(int i=0;i<n;i++) cin>>l[i];
        for(int i=0;i<n;i++) cin>>r[i];
        int total=0,max_total=0,rating=0,min_index=0;
        for(int i=0;i<n;i++){
            total=l[i]*r[i];
            if(total>max_total){
                max_total=total;
                min_index=i;
                rating=r[i];
                
            }
            else if(total==max_total){
                if(r[i]>rating){
                    min_index=i;
                    rating=r[i];

                }
                
                
            }

            
        }
        cout<<min_index+1<<endl;

    }
    
    return 0;
}