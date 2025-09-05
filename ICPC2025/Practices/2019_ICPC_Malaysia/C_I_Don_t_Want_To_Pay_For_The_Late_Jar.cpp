#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int D;
    cin >> D;

    for(int i=0;i<D;i++){
        int N,S;
        cin >> N >>S;
        int max=-1;
        for(int j=0;j<N;j++){
            int f,t;
            cin >> f >> t;
            int cost;
            if(t>S){
                cost=f-(t-S);
            }else{
                cost=f;
            }
            if(cost>max)max=cost;

            max<0?max=-1:max;
        }
        cout << "Case #" << i+1  << ": "<< max <<endl;
    }
}