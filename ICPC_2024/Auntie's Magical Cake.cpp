#include <iostream>
using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	unsigned long long int c1=2,c2=4;
	
	if(n<3){
		cout << "0";
		return 0;
	}else if(n==3){
		cout << c1;
	}else if(n==4){
		cout << c2;
	}else{
		int even =1;
		int odd = 3;
		
		unsigned long long int ans=0;
		for(int i=4;i<n;i++){
			if((i+1)%2==0){
				ans=c2+c2-c1+even;
				even++;
				c1=c2;
				c2=ans;
			}else{
				ans=c2+c2-c1+odd;
				odd++;
				c1=c2;
				c2=ans;
			}
		}
		cout<<ans;
	}
}