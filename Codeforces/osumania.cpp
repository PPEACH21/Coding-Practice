#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    for(int i=0;i<n;i++){
        int p;
        cin >> p;

        int k[p];
        int l=0;
        for(int i=0;i<p*4;i++){
            char c;
            cin>>c;
            if(c =='#'){
                k[l]=(i%4)+1;
                l++;
            }
        }
        for(int i=p-1;i>=0;i--){
            cout << k[i] << " ";
        }
        cout << endl;
    }
}