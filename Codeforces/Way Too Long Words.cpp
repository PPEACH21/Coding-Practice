#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		string c;
		cin >> c;
		if(c.length()<=10){
			cout << c << endl;
		}else{		
			cout << c[0] << c.length()-2 << c[c.length()-1] <<endl;
		}
	}
}
