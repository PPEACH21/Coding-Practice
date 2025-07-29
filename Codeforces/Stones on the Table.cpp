#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,count=0;
    string s;
    cin >> n;
    cin >> s;
    char c=s[0];
    for(int i=1;i<n;i++){
        if(s[i]==c){
            count++;
        }
        c=s[i];
    }
    cout << count;
}