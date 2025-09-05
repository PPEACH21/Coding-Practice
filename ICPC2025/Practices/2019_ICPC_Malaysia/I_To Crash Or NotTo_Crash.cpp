#include <bits/stdc++.h>
using namespace std;

int main(){
    bool check=false;
    char ans=' ';
    int index=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<10;j++){

            char c;
            cin >> c;
            
            if(c=='='){
                check=!check;
                index=i;
                continue;
            }

            if(check&&i==index&&c!='.'&&ans==' ')ans=c;
        }
    }
    if(ans==' '){
        cout << "You shall pass!!!";
    }else{
        cout << ans;
    }
}