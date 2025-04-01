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
    string s;
    cin>>s;
    int lmost1=-1, rmost1=-1;
    rep(i,0,s.size()) {
        if (s[i] == '1') {lmost1 = i; break;}
    }      
    for(int i = s.size()-1;i>=0;i--) {
        if (s[i] == '1') {rmost1 = i; break;}
    }
    int cnt=0;
    if (lmost1==-1) {cout<<0<<endl;} else {
    for(int i = lmost1 ;i<=rmost1;i++) {
        if (s[i] == '0') {cnt++;}
    }
    cout<<cnt<<endl;
}
}

int main() {
    //add quotes incase input output file
    //freopen(input.txt,r,stdin);
    //freopen(output.txt,w,stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        solve();
    }
}