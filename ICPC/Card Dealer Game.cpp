#include <iostream>
using namespace std;

const int MOD = 1000000007;

int gcdExtended(int a,int b,int *x,int *y){
    if (a == 0){
        *x=0;
        *y=1;
        return b;
    }
    int x1,y1;
    int gcd = gcdExtended(b%a,a,&x1,&y1);
    *x = y1-(b/a)*x1;
    *y = x1;
    return gcd;
}

int modInverse(int y,int mod){
    int x, y_temp;
    int g = gcdExtended(y,mod,&x,&y_temp);
    if (g!=1){
        return -1; 
    }
    return (x%mod+mod)%mod;  
}

int main() {
    int n;
    cin >> n;

    long long x = 1; 
    long long y = 1;  

    for(int i=0;i<n;i++){
        int p, q;
        cin >> p >> q;

        x = (x*p)%MOD;
        y = (y*q)%MOD;
    }


    int y_inv=modInverse(y,MOD);
    cout << (x * y_inv) % MOD << endl;
}

