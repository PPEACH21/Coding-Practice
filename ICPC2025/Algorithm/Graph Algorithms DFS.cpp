#include <bits/stdc++.h>
using namespace std;

bool DFS(int p,int end,vector <vector <int>> adj,vector <bool> visit){
    bool check=false;
    cout << p << " ";
    if(p!=end && !visit[p]){
        for(int i=0;i<adj[p].size();i++){
            visit[p]=true;
            check=DFS(adj[p][i],end,adj,visit);
        }
    }else{
        if(visit[p]){
            return false;
        }else{
            return true;
        }
    }
    return check;
}

int main(){
    int n,node;
    cin >> node;
    cin >> n;
    vector <vector <int>> adj(node);
    vector <bool> visit(node);
    while(n--){
        int u,v;
        cin >> u >> v;

        adj[u].push_back(v);
    }

    cout << "Start :";
    int Start,End;
    cin >> Start;
    cout << "End node : ";
    cin >> End;
    
    cout << "DFS : ";
    if(DFS(Start,End,adj,visit)){
        cout << "possible";
    }else{
        cout << "impossible";
    }
    // for(int i=0;i<node;i++){
    //     cout<< i << " : "; 
    //     for(int j=0;j<adj[i].size();j++){
    //         cout << adj[i][j] <<" -> ";
    //     }
    //     cout << endl;
    // }
}