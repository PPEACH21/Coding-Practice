#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll minimum(vector <ll> a){
    ll sum=0;
    ll tmpsum=0;
    for(int i=0;i<a.size();i++){
        if(i>0){
            // cout <<  tmpsum << " : "  << a[i] << endl;
            ll tmp=min(a[i],tmpsum);
            // cout <<   " TMP: "  << tmp << endl;
            sum+=tmp;
            // cout <<  i+1 <<" : " << sum << endl;
            tmpsum=tmp;
        }else{
            sum=tmpsum=a[i];
            // cout << " start : " << sum << endl;
        }
    }
    return sum;
}

int main(){
    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        int m;
        cin >> m;
        
        vector <ll>arr(m);
        
        for(int i=0;i<m;i++){
            cin >> arr[i];
        }
        
        ll ans;
        if(arr.size()>2){
            ans=min(2*arr[0],arr[0]+arr[1]);
        }else{
            ans=arr[0]+min(arr[0],arr[1]);
        }
        cout << ans <<endl;
    }
}