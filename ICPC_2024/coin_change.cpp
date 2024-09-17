#include <iostream>
using namespace std;

int check(int arr[][6],int C,int n,int coin[]){
	for(int i=0;i<=C;i++){
		arr[i][1]=1;
	}
	
	for(int i=1;i<n;i++){
		arr[0][i]=1;
		arr[1][i]=1;
	}

	for(int y=2;y<=C;y++){
		for(int x=2;x<n;x++){
			if(y-coin[x-1]>=0){
				arr[y][x]=arr[y][x-1]+arr[y-coin[x-1]][x];
			}else{
				arr[y][x]=arr[y][x-1];
			}	
		}
	}
	
//	for(int y=0;y<=C;y++){
//		cout << endl << y << " : ";
//		for(int x=0;x<n;x++){
//			cout << arr[y][x] << " ";
//		}
//	}
	return arr[C][n-1];
}


int main(){
	while(!cin.eof()) {
	    int C;
		cin >> C;
	    if(cin.eof())
	      break;
		int arr[C+1][6];
		int coin[]={1,5,10,25,50};
		
		for(int i=0;i<=C;i++){
			for(int j=0;j<6;j++){
				arr[i][j]=0;
			}
		}
		
	//	for(int i=0;i<=C;i++){
	//		cout << endl << i << " : ";
	//		for(int j=0;j<6;j++){
	//			cout << arr[i][j] << " ";
	//		}
	//	}
		
		int ans = check(arr,C,6,coin);
		cout << ans <<endl;	
	}
}
