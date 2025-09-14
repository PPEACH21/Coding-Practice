#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    ll m,n;
    cin >> m>> n;

    vector <vector <ll> > matrix (m,vector <ll>(n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >> matrix[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            ll k;cin>> k;

            matrix[i][j]+=k;
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout << matrix[i][j] <<" ";
        }
        cout << endl;
    }



}