#include <bits/stdc++.h>
using namespace std;

bool BFS(int p,int end,vector <vector <int>> adj,vector <bool> visit){
    queue <int> Q;
    Q.push(p);
    visit[p]=true;

    while(!Q.empty()){
        int u=Q.front(); 
        Q.pop();
        for(int i=0;i<adj[u].size();i++){
            cout << adj[u][i] << " ";
            if(!visit[adj[u][i]]){
                visit[adj[u][i]]=true;
                Q.push(adj[u][i]);
                
                if(adj[u][i]==end){
                    return true;
                }
            }
        }   
    }
    return false;
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
    
    cout << "BFS : ";
    if(BFS(Start,End,adj,visit)){
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