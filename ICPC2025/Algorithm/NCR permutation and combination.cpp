#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

const ll MOD = 1000000007;
ll modpow(ll a, ll e, ll m) { // power mod
    ll r = 1;
    while (e) {
        if (e & 1) r = (r * a) % m;
        a = (a * a) % m;
        e >>= 1;
    }
    return r;
}


// ======= find nCr Start ======= 
const int N = 2000005;
ll modinv2(ll a) { return modpow(a, MOD-2, MOD); }
ll fact[N], invfact[N];
void init_fact() {
    fact[0]=1;
    for(int i=1;i<N;i++) fact[i]=fact[i-1]*i%MOD;
    invfact[N-1]=modinv2(fact[N-1]);
    for(int i=N-2;i>=0;i--) invfact[i]=invfact[i+1]*(i+1)%MOD;
}

ll nCr(int n,int r) {
    if(r<0||r>n) return 0;
    return fact[n]*invfact[r]%MOD*invfact[n-r]%MOD;
}
// ======= find nCr End =======

// === All Permutations ===
template<class T>
vector<vector<T>> all_permutations(vector<T> a) {
    sort(a.begin(), a.end());                // เริ่มจาก perm เล็กสุด
    vector<vector<T>> res;
    do {
        res.pb(a);               // เก็บ permutation ปัจจุบัน
    } while (next_permutation(all(a)));
    return res;
}

// === All Combinations (เลือก k จาก n) ===
vector<vector<int>> combinations(int n, int k) {
    vector<int> mask(n, 0);
    fill(mask.end()-k, mask.end(), 1);    // 0...(n-k) 1...k
    vector<vector<int>> res;
    do {
        vector<int> subset;
        for (int i = 0; i < n; i++)
            if (mask[i]) subset.pb(i);
        res.pb(subset);
    } while (next_permutation(all(mask)));
    return res;
}

int main(){
    int n,k;
    cin >> n>>k;
    

    vector<int> arr = {1, 2, 3};
    auto perms = all_permutations(arr);
    cout << "Permutations:\n";
    for (auto &p : perms) {
        for (auto &x : p) cout << x << " ";
        cout << "\n";
    }

    vector<vector<int>> combi;
    combi=combinations(n,k);
    cout << "Combination : ";
    for(int i=0;i<combi.size();i++){
        for(int j=0;j<combi[i].size();j++){
            cout << combi[i][j] <<" ";
        }
        cout << endl;
    }
}
