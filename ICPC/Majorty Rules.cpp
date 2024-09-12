#include <iostream>
#include <map>
using namespace std;

int main(){
	int n;
	cin >> n;
	map <int , int > mp;
	
	for(int i=0;i<n;i++){
		int tmp;
		cin >> tmp;
		if(mp.find(tmp)==mp.end() ){
			mp[tmp] = 1;
		}else{
			mp[tmp]++;
		}			 
	}
	
	int cadimax,maxvote=0;
    for (auto it = mp.begin(); it != mp.end(); ++it) {
        if(maxvote < it->second ){
	        cadimax = it->first;
			maxvote =it->second;
		}
		
    }
    cout <<cadimax;
}
