#include <iostream>
using namespace std;

struct NP{
	long int H;
	long int S;
};

void score(long int n,long int k,struct NP NN[],long int max){
	int arr[n];
	for(int i=0;i<n;i++){
			arr[i]=0;
	}
	
	for(int i=0;i<n;i++){
		arr[i]=NN[i].S;
	}

//	for(int j=0;j<n;j++){
//		arr[n-1][j]=NN[n-1].S;
//	}

//	
//	for(int i=0;i<n;i++){
//		cout <<endl <<  NN[i].H << " : " ;
//		for(int j=0;j<n;j++){
//			cout << arr[i][j] << " ";
//		}
//	}	
//	cout << endl;
	

	long int best=max;
	for(int i=n-2;i>=0;i--){
		for(int j=i+1;j<n;j++){
//			cout << " CASE " << NN[i].H << " : "<< NN[i].H << " - " << NN[j].H << " = "<< NN[i].H - NN[j].H << endl;
			if(NN[i].H - NN[j].H <= k && NN[i].H - NN[j].H >= 0){
				if(NN[i].S + arr[j]>arr[i]){
					arr[i] = NN[i].S + arr[j];
//					cout << " UPDATE " << NN[i].S + arr[j] << " "<<  endl;
				}
			}else{
				if(NN[i].S>arr[i]){
					arr[i]= NN[i].S;
				}	
			}
			if(best<arr[i]){
					best=arr[i];
			}
		}
	}

//	for(int i=0;i<n;i++){
//		cout << arr[i] << " ";
//	}	
		
	cout << best;
}


int main(){
	long int n,k;
	cin >> n;
	cin >> k;
	long int max=0;
	struct NP NN[n];
	for(int i=0;i<n;i++){
		cin >> NN[i].H;
		cin >> NN[i].S; 
		if(max<NN[i].H){
			max=NN[i].S;
		}
	}

//	for(int i=0;i<n;i++){
//		cout << endl << NN[i].H << " " << NN[i].S << " ";
//	}

	if(n!=1){
		score(n,k,NN,max);
	}else{
		cout<<max;
	}
	
}
