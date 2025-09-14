#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin >> n;

    ll l,w;

    int k;
    cin >>k;
    w = l = k;
    n--;

    while(n--){
        ll t;
        cin >>t;
        l=max(t,l);
        w=min(t,w);
    }
    cout << w << endl << l;
}