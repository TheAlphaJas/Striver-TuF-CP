#include <bits/stdc++.h>
using namespace std;
//author: von_Braun
#define ll long long
#define lli long long int
#define pb push_back
#define rep(var, start, num) for(ulli var = start; var <start + num; var++)
#define all(x) x.begin(), x.end()
#define ulli unsigned long long int
#define ull unsigned long long
bool sortbysec(const pair<ll,ll> &a,const pair<ll,ll> &b) { return (a.second < b.second); }

void solve() {
    int a,b;
    cin>>a>>b;
    rep(i,0,a) {
        if (i%2 == 0) {
            rep(j,0,b) {cout<<"#";} cout<<endl;
        } else {
            if ((i/2)%2 == 0) {
                rep(j,0,b-1) {cout<<".";} cout<<"#"; cout<<endl;
            } else {
                cout<<"#"; rep(j,0,b-1) {cout<<".";} cout<<endl;
            }
        }
    }
}
int main() {
    //add quotes incase input output file
    //freopen(input.txt,r,stdin);
    //freopen(output.txt,w,stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    //cin >> tc;
    for (int t = 1; t <= tc; t++) {
        solve();
    }
}