#include <iostream>
using namespace std;

int main(){
	int n,ans=0;
	cin >> n;
	
	for(int i=0;i<n;i++){
		string s;
		cin >> s;
		
		if(s[0]=='+'){
			++ans;
		}else if(s[0]=='-'){
			--ans;
		}else{
			if(s[1]=='+'){
				ans++;
			}else if(s[1]=='-'){
				ans--;
			}
		}
	}
	cout << ans;
}
