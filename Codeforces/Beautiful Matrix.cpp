#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int x,y,c;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cin >> c;
			if(map[i][j]==1){
				x=j;
				y=i;
			}
		}
	}
	
	cout << ans;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cout << map[i][j] <<  " ";
		}
		cout << endl;
	}
}
