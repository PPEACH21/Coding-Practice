#include <iostream>
using namespace std;

int main(){
    int n1[2];

    cin >> n1[0] >> n1[1];

    if((n1[0]==2 && n1[1]==1)|| (n1[0]==1 && n1[1]==2)){
        cout << "3";
        return 0;         
    }
    if(n1[0]>n1[1]){
        cout << n1[0]-n1[1];
    }else{
        cout << n1[1]-n1[0];
    }
}