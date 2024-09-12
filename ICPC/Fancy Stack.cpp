#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int c;
	cin >> c;
	
	for(int i=0;i<c;i++){
		int n;
		unsigned long int num;
		unsigned long int sum1=0,sum2=0;
		cin >> num;
		for(int j=0;j<num;j++){
			cin >> n;
			if(j%2==0){	
				sum1+=n;
			}else{
				sum2+=n;
			}
			
		}
		cout << ((sum1%num)+(sum2%num))%num << endl;
	}
}
