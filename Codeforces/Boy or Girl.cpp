#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cin >> s;

    // cout << s << endl;
    sort(s.begin(),s.end());
    // cout << s << endl;
    int count=1;
    char c=s[0];
    for(int i=1;i<s.length();i++){
        if(c!=s[i]){
            
            count++;
            // cout << count << " ";
            c=s[i];
        }
    }

    if(count%2==0){
        cout << "CHAT WITH HER!";
    }else{
        cout << "IGNORE HIM!";
        // cout << count << " ";
    }

}