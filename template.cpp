#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define endl "\n"
int solve(vector<int>& v){
    
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int x = solve(v);
        cout << x << endl;
    }  
}