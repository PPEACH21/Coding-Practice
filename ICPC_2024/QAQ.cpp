#include <iostream>
#include <string>
using namespace std;

int main(){
	int count=0;
	string n;
	cin >> n;
	
	for(int i=0;i<n.length();i++){
		for(int j=i+1;j<n.length();j++){
			for(int k=j+1;k<n.length();k++){
				if(n[i]=='Q' && n[j]=='A' && n[k]=='Q'){
					count++;
				}
			}
		}
	}
	
	cout << count;
}
