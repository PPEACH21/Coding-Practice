#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int d1=0,d2=0;
        for(int j=0;j<6;j++){
            char a;
            cin>> a;
            if(j<3){
                d1+=(int)a;
            }else{
                d2+=(int)a;
            }
        }
        if(d1==d2){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}