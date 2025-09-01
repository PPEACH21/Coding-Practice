#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    while(n--){
        int w,h;
        cin >> w >> h;
        if(w==h){
            cout << "YES" <<endl;
        }else{
            cout << "NO" <<endl;
        }
    }
}