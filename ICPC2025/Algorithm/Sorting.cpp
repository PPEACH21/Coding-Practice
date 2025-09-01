#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    vector <int> p;
    while(--n){
        int k;
        cin >> k;
        p.push_back(k);
    }

    //insertion
    for(int i=1;i<p.size();i++){
        while(i!=0 && p[i]<p[i-1]){
            swap(p[i],p[i-1]);
            cout << "index i : " << i << " index i-1 : " << i-1 <<endl;
            i--;
        }
    }

    // bubble
    // for(int i=1;i<p.size();i++){
    //     for(int j=i;j<p.size();j++){
    //         if(p[i]<p[i-1]){
    //             swap(p[i],p[i-1]);
    //             cout << "index i : " << i << " index i-1 : " << i-1 <<endl;
                
    //         }
    //     }
    // }

    cout << endl << "Ans : ";
    for(int i=0;i<p.size();i++){
        cout << p[i] << " ";
    }
    cout << endl;
    
    

}