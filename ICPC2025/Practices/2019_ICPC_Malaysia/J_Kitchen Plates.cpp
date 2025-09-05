#include <bits/stdc++.h>
using namespace std;

vector <bool> visit(5,false);

struct Topo {
    int n; 
    vector<vector<int>> g; 
    vector<int> indeg;
    Topo(int n=0):n(n),g(n),indeg(n,0){}

    void add_edge(int u,int v){ g[u].push_back(v); indeg[v]++; }
    
    vector<int> run(){
        queue<int> q; for(int i=0;i<n;i++) if(!indeg[i]) q.push(i);
        vector<int> ord; while(!q.empty()){ int u=q.front(); q.pop(); ord.push_back(u);
            for(int v:g[u]) if(--indeg[v]==0) q.push(v);
        } return ord;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    Topo k(5);

    vector <vector <int> > adj(5);
    for(int i=0;i<5;i++){
        string s;
        cin >> s;

        int u,v;
        if(s[1]=='<'){
            u=s[0]-'A';
            v=s[2]-'A';
        }else{
            u=s[2]-'A';
            v=s[0]-'A';
        }
        k.add_edge(u,v);
    }
    auto ord = k.run();
    
    if(ord.size()!=5){
        cout << "impossible";
        return 0;
    }

    for(int i=0;i<ord.size();i++){
        char c= ord[i]+'A';
        cout <<c;
    }
}