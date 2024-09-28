#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int prevate=0,count=0;
    for(int i=0;i<n;i++){
        int k;
        cin >> k;
        if(prevate!=k|| i==0){
            count++; 
        }
        prevate=k;
    }
    cout << count;
}