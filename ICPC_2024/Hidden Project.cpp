#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	for(int i=0;i<n;i++){
		long long in1,in2;
		
		cin >> in1 >> in2;
		if(in1*in2>(in1*(in1+1)/2)){
			cout << in1*in2 << endl;
		}else{
			cout << (in1*(in1+1)/2) << endl;
		}
	}
}
