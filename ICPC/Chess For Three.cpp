#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	vector <int> match = {1,2};
	
	for(int i=0;i<n;i++){
		int w;
		cin >> w;
		
		if(find(match.begin(), match.end(), w) != match.end()){
			if(w==1 && find(match.begin(), match.end(), 2) != match.end()){
				match.clear();
				match.push_back(1);
				match.push_back(3);
			}else if(w==1 && find(match.begin(), match.end(), 3) != match.end()){
				match.clear();
				match.push_back(1);
				match.push_back(2);
			}else if(w==2 && find(match.begin(), match.end(), 1) != match.end()){
				match.clear();
				match.push_back(3);
				match.push_back(2);
			}else if(w==2 && find(match.begin(), match.end(), 3) != match.end()){
				match.clear();
				match.push_back(1);
				match.push_back(2);
			}else if(w==3 && find(match.begin(), match.end(), 1) != match.end()){
				match.clear();
				match.push_back(3);
				match.push_back(2);
			}else if(w==3 && find(match.begin(), match.end(), 2) != match.end()){
				match.clear();
				match.push_back(3);
				match.push_back(1);
			}
		}else{
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
}
