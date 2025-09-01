#include <bits/stdc++.h>
using namespace std;

int binary(int k,vector <int> p){
    int low=0;
    int high=p.size()-1;

    while(low<=high){
        int mid=(low+high)/2;
        cout << "mid : " << mid;

        if(p[mid]==k){
            return 1;
        }else if(k>p[mid]){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return 0;
}

int main(){
    int n;
    cin >> n;
    vector <int> p;
    for(int i=0;i<n;i++){
        int k;
        cin >> k;
        p.push_back(k);
    }

    sort(p.begin(),p.end());
    int k;
    cout << "Search : " ;
    cin >> k;
    binary(k,p) ? cout << "Found" : cout << "Not Found";

}