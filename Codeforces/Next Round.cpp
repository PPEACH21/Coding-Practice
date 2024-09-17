#include <iostream>
using namespace std;

int main(){
	int n,t,ans=0;
	cin >> n >> t;

	int d,s;	
	for(int i=0;i<n;i++){
		cin>> s;
		if(ans>=t){
			if(s==d){
				ans++;
			}else{
				break;
			}
		}else{
			if(s==0){
				continue;	
			}else{
				d=s;
				ans++;
			}
		}
	}
	cout << ans;
	
}
