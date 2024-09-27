#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int dfs(int n, int parent, int c,vector<int> a,vector<vector<int>> G){
    int sum = a[n];

    for(int walk : G[n]){
        if(walk != parent){
            sum += max(dfs(walk,n,c,a,G)-c,0);
        }
    }

    return sum;
}


int main(){
    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        int p,c;
        cin >> p >> c;

        vector<int> a(p);
        vector<vector<int>> G(p);

        for(int j=0;j<p;j++){
            cin >> a[j];
        }

        for(int j=0;j<p-1;j++){
            int u, v;
            cin >> u >> v;
            u--;
            v--;
            G[u].push_back(v);
            G[v].push_back(u);
        }

        int ans=dfs(0,-1,c,a,G);
        cout << ans << endl;
        a.clear();
        G.clear();

    }
}