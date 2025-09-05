#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

ll modpow(ll a, ll e, ll m) { // power mod
    ll r = 1;
    while (e) {
        if (e & 1) r = (r * a) % m;
        a = (a * a) % m;
        e >>= 1;
    }
    return r;
}

// extended gcd (หา inverse mod)
ll extgcd(ll a, ll b, ll &x, ll &y) { 
    if (!b) { x = 1; y = 0; return a; }
    ll x1, y1;
    ll g = extgcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return g;
}
ll modinv(ll a, ll m) {
    ll x, y;
    ll g = extgcd(a, m, x, y);
    if (g != 1) return -1; // inverse ไม่มี ถ้า gcd != 1
    return (x % m + m) % m;
}




int main(){
    ll a,b , m ,ex   ;
    cin >> a >> b >> m>>ex;

    cout << "Modinv " << modinv(a,m)<<endl;
    cout << "Modpow "<<modpow(a,ex,m) <<endl;
    cout << "GCD " << gcd(a,b) << endl;
    cout << "LCM " << lcm(a,b) << endl;
}