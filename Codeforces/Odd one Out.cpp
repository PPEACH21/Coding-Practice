#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        int n1,n2,n3;
        cin >> n1 >> n2 >> n3;
        if(n1==n2){
            cout <<n3 << endl;
        }else if(n1==n3){
            cout << n2 << endl;
        }else{
            cout << n1 << endl;
        }
    }
}