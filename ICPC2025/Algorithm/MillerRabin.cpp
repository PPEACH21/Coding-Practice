#include <bits/stdc++.h>
using namespace std;
#define ll
#define pb

struct MillerRabin{
    static unsigned long long mul(unsigned long long a,unsigned long long b,unsigned long long m){ return (unsigned __int128)a*b%m; }
    static unsigned long long powmod(unsigned long long a,unsigned long long e,unsigned long long m){
    unsigned long long r=1%m; a%=m; while(e){ if(e&1) r=mul(r,a,m); a=mul(a,a,m); e>>=1; } return r;
    }
    static bool isPrime(unsigned long long n){
        if(n<2) return false;
        static const unsigned long long A[] = {2,3,5,7,11,13,17};
        for(size_t i=0;i<sizeof(A)/sizeof(A[0]);i++){ if(n%A[i]==0) return n==A[i]; }
        unsigned long long d=n-1,s=0; while((d&1)==0){ d>>=1; s++; }
        for(size_t i=0;i<sizeof(A)/sizeof(A[0]);i++){
            unsigned long long a=A[i]; if(a%n==0) continue;
            unsigned long long x=powmod(a,d,n);
            if(x==1||x==n-1) continue;
            bool ok=false;
            for(unsigned long long j=1;j<s;j++){ x=mul(x,x,n); if(x==n-1){ ok=true; break; } }
            if(!ok) return false;
        }
        return true;
    }
};


int main(){
    unsigned ll s;
    cin >> s;

    if(MillerRabin::isPrime(s)){
        cout << "prime";
    }else{
        cout << "not prime";
    }
}