#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int i;
    for(i=0;i<n-1;i++){
        if(i%2==0){
            cout << "I hate that ";
        }else{
            cout << "I love that ";
        }
    }
    if(i%2==0){
        cout << "I hate it";
    }else{
        cout << "I love it";
    }
}