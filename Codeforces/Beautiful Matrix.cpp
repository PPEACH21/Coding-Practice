#include <iostream>
#include <vector>
using namespace std;

int main(){
	int x,y;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			int n;
			cin >> n;
			if(n==1){
				x=j;
				y=i;
			}
		}
	}

	int x1=0,y1=0;
	if(x>2){
		x1=x-2;
	}else if(x<2){
		x1=2-x;
	}

	if(y>2){
		y1=y-2;
	}else if(y<2){
		y1=2-y;
	}


	cout << x1 +y1;
}