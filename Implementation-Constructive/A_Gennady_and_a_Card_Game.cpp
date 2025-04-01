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

bool check(string &my, string &table) {
    return (my[0]==table[0] || my[1] == table[1]);
}

void solve() {
    string my;
    string table[5];
    cin>>my;
    bool fl=0;
    rep(i,0,5) {cin>>table[i]; if(!fl) {fl = check(table[i], my);}} 
    if (fl) {cout<<"YES\n";} else {cout<<"NO\n";}
}

int main() {
    //add quotes incase input output file
    //freopen(input.txt,r,stdin);
    //freopen(output.txt,w,stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) {
        solve();
    }
}