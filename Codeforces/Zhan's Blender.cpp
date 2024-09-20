#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        int j,k,l;
        cin>> j;
        cin >> k >> l;
        if(k>=l){
            if( j%l==0){
                cout << j/l << endl;
            }else{
                cout << j/l +1<< endl;
            } 
        }else{
            if( j%k==0){
                cout << j/k << endl << endl;
            }else{
                cout << j/k +1<< endl;
            } 
        }
    }
}