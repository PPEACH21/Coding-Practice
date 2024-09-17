#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int l;
        cin >> l;
        int ans=0;
        for(int j=0;j<l;j++){
            int u;
            
            for(int k=0;k<j;k++){}
            cin >> u;
            if(j%2==0){
                ans+=u;
            }else{
                ans-=u;
            }
        }
        cout << ans << endl;
    }

}