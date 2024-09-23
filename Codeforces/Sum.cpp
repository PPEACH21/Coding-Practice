#include <iostream>
using namespace std;

int main(){
    int n; 
    cin >> n;
    
    for(int i=0;i<n;i++){
        int a,b,c;
        cin >> a>> b>>c;

        if(a+b == c){
            cout << "YES" << endl;
        }else if(a+c == b){
            cout << "YES" << endl;
        }else if(b+c == a){
            cout << "YES" << endl;
        }else{
            cout << "NO" <<endl;
        }
    }
}