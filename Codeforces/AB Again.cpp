#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        char c1,c2;
        cin >> c1 >> c2;

        cout << c1-'0'+c2-'0' << endl;
    }
}