#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	int count=0;
	
	for(int i=0;i<n;i++){
		string d;
		cin >> d;
		
		if(d == "Tetrahedron"){
			count+=4;
		}else if(d == "Cube"){
			count+=6;
		}else if(d == "Octahedron"){
			count+=8;
		}else if(d == "Dodecahedron"){
			count+=12;
		}else if(d == "Icosahedron"){
			count+=20;
		}
	}
	
	cout << count;
}
