#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        int k;
        cin >>k;
        vector <int> arr(k);
        for(int j=0;j<k;j++){
            cin >> arr[j];
        }
        
        vector <int> c=arr;
        sort(c.begin(),c.end());
        
        vector <int> Ans;
        for(int j=0;j<arr.size();j++){
            if(arr[j]!=c[j]){
                Ans.push_back(arr[j]);
            }
        }

        if(Ans.size()>0){
            cout << "YES" << endl;
            cout << Ans.size() << endl;
            for(int j=0;j<Ans.size();j++){
                cout << Ans[j] << " " ;
            }
            cout << endl;
        }else{
            cout << "NO" <<endl;
        }

    }
}