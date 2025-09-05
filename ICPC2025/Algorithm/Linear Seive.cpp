#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back
const int MAXN = 1000000;

vector<int> sieve(int n){
    bool is_prime[MAXN+1];
    vector<int> primes;
    fill(is_prime, is_prime+n+1, true);
    is_prime[0]=is_prime[1]=false;
    for (int i=2; i*i<=n; i++) if (is_prime[i])
        for (int j=i*i; j<=n; j+=i) is_prime[j]=false;
    for (int i=2;i<=n;i++) if(is_prime[i]) primes.pb(i);
    return primes;
}

struct SegSieve{
    static vector<long long> primes_upto(long long n){
        long long m=(long long)(sqrtl((long double)n)+1);
        vector<int> is(m+1,1); vector<long long> p;
        for(long long i=2;i<=m;i++) if(is[(size_t)i]){
            p.push_back(i);
            if(i*i<=m) for(long long j=i*i;j<=m;j+=i) is[(size_t)j]=0;
        }
        return p;
    }
    static vector<long long> run(long long L,long long R){
        if(L<2) L=2;
        vector<char> is((size_t)(R-L+1),1);
        vector<long long> base=primes_upto(R);
        for(size_t k=0;k<base.size();k++){
            long long p=base[k];
            long long s=((L+p-1)/p)*p; if(s<p*p) s=p*p;
            for(long long x=s;x<=R;x+=p) is[(size_t)(x-L)]=0;
        }
        vector<long long> res; for(long long i=0;i<=R-L;i++) if(is[(size_t)i]) res.push_back(L+i); return res;
    }
};


int main(){
    //Sieve
    vector <int> n;
    int l;
    cin >> l;
    n=sieve(l);
    cout << "run :";
    for(int i=0;i<n.size();i++){
        cout << n[i] << " ";
    }
    cout << endl;
    
    //SegSieve
    vector <long long> ans;
    ll a,b;
    cin >> a >>b;
    ans=SegSieve::run(a,b);
    for(int i=0;i<ans.size();i++){

        cout << ans[i] << " ";
    }
}