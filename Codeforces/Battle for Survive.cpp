#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int n1;
        cin >> n1;

        vector <long long int> d;
        long long int in3;

        for(int j=0;j<n1;j++){
            cin >> in3;
            d.push_back(in3);
        }

        long long int sum=d[n1-2];
		for(int j=n1-3;j>=0;j--){
			sum-=d[j];
		}

        cout << d[n1-1]-sum << endl;
        d.clear();
    }
}