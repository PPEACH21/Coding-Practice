#include <iostream>
#include <climits>
using namespace std;

struct nugget{
	long int n;
	long int coin;
};

void OTP(int min,struct nugget NG[],int N){
	int arr[N+1];
	for(int i=0;i<=N;i++){
		arr[i]=INT_MAX;
	}
	arr[0]=0;	
//	for(int i=0;i<=N;i++){
//		cout<< i <<  "  =  " << arr[i] << endl;
//	}
//	for(int i=0;i<=N;i++){
//		cout<<1-i <<  "  =  " << arr[1-i] << endl;
//	}
	
	
	for(int i=1;i<=N;i++){
		for(int j=0;j<3;j++){
			int ng=NG[j].n;
			int cost=NG[j].coin;
//			cout << arr[i-ng] << "+" << cost << " = " << arr[i-ng]+cost << " " << " j="<< j << " i=" << i << " ng=" << ng << endl;
			if(i>=ng && arr[i-ng]!=INT_MAX){ // case
//				cout<< "IN CASE "<< endl << endl;
				
				
				if(arr[i]>arr[i-ng]+cost){//min
//					cout<< "MIN CASE "<< endl << endl;
					arr[i]=arr[i-ng]+cost;
				}				
			}
						
		}
	}
	if(arr[N]!=INT_MAX){
		cout<< arr[N];
	}else{
		for(int i=N;i>=0;i--){
			if(arr[i]!=INT_MAX){
				cout << arr[i]+NG[0].coin;
				break;
			}
		}
	}
}

int main(){
	struct nugget NG[3];
	int N;
	for(int i=0;i<3;i++){
		cin >> NG[i].n;
		cin >> NG[i].coin;
	}
	cin >> N;
	
//	for(int i=0;i<3;i++){
//		cout << NG[i].n << " " <<  NG[i].coin << endl;
//	}
	
	int count=0,coinmin=0;
	for(int i=0;i<3;i++){
		if(i==0){
			coinmin=NG[0].coin;
		}else if(coinmin <= NG[i].n){
			coinmin=NG[i].coin;
		}
		if(N<=NG[0].n){
			count++;
		}
	}
	if(count==3){
		cout << coinmin;
		return 0;
	}else{
		OTP(coinmin,NG,N);
	}
}
