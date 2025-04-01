#include <bits/stdc++.h>
using namespace std;
//jasmer57
#define ll long long
#define lli long long int
#define pb push_back
#define rep(var, start, num) for(ulli var = start; var <start + num; var++)
#define all(x) x.begin(), x.end()
#define ulli unsigned long long int
#define ull unsigned long long
void solve() {
    int n;
    cin>>n;
    int a[n];
    map<int,int> mp;
    rep(i,0,n){cin>>a[i]; mp[a[i]]=i+1;}
    for (auto x:mp){cout<<x.second<<" ";}
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    //cin >> tc;
    for (int t = 1; t <= tc; t++) {
solve();
    }
}