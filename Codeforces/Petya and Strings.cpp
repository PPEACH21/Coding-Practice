#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
    string s,s1;
    cin >> s >> s1;

    for(int i=0;i<s.length();i++){
        s[i]=tolower(s[i]);
        s1[i]=tolower(s1[i]);
        
    }

    if(s > s1){
        cout << "1";
    }else if(s1 > s){
        cout << "-1";
    }else{
        cout << "0";
    }
}