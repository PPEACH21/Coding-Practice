#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector <int> place;
    vector <int> tmp;
    while(n--){
        int k;
        cin >> k;
        place.push_back(k);   
    }

    int arrsize=place.size();
    // for(int i=0;i<arrsize;i++){
    //     cout << place[i] << " ";
    // }
    // cout << endl;
    
    vector <pair <int,int> > ans;
    for(int i=0;i<arrsize;i++){
        tmp.push_back(i+1);
    }
    cout << endl;

    if(arrsize>2){
        for(int i=0;i<arrsize-1;i++){
            int run=i;
            for(int j=i;j<place[i]-1;j++){
                swap(tmp[j],tmp[j+1]);
                ans.push_back(make_pair(tmp[j],tmp[j+1]));
            }

            for(int j=run;j>place[i]-1;j--){
                swap(tmp[j],tmp[j-1]);
                ans.push_back(make_pair(tmp[j-1],tmp[j]));
            }
            // cout << place[i] << " " << place[i+1] << endl;
        }

        // for(int i=arrsize-2;i>0;i--){
        //     cout << place[i-1] << " " << place[i] << endl;
        // }
        
        cout << "SIZE : " << ans.size() << endl; 
        for(int i=0;i<ans.size();i++){
            cout << ans[i].first << " " << ans[i].second << endl;
        }
        // swap(place[0],place[1]);
        // cout << place[0] << " " << place[1] << endl;

    }else{
        if(arrsize==1 ){
            cout<<"0" <<endl;
        }else{
            cout << 2*arrsize-1 << endl;
            cout << place[0] << " " << place[1] << endl;
            cout << place[1] << " " << place[0] << endl;
        }
    }
}