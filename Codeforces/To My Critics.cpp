#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        int in1,in2,in3;
        cin >> in1 >> in2 >> in3;
        
        if(in1+in2>=10 || in1+in3>=10 || in2+in3>=10 ){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}