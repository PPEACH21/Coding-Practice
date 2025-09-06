#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;
    string str1=str;


    sort(str1.begin(),str1.end());
    int count=0;
    if(str1.length()>1){
        for(int i=1;i<str1.length();i++){
            if(str1[i-1]==str1[i]){
                count++;
            }
        }
    }
    cout << count;
    
}