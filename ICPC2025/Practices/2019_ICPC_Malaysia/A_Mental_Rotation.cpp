#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >>n;

    string str;
    cin >>str;
    cin.ignore();
    vector<vector<char> > MAP(n,vector<char>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>> MAP[i][j];
        }
    }


    int run=0;

    for(int i=0;i<str.length();i++){
        // if(str[i]=='R'){
        //     run++;
        // }else{
        //     run--;
        // }
        str[i]=='R'?run+=1:run-=1;
        // cout<< "RUN " << run << endl;
        run=run%4;
        if(run==-1)run=3;
    }
    
    switch(run){
        case 0:
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    cout <<  MAP[i][j];
                }
                cout << endl;
            }
            break;
        case 1:
            for(int i=0;i<n;i++){
                for(int j=n-1;j>=0;j--){
                    switch(MAP[j][i]){
                        case '<':
                            cout<< '^';
                            break;
                        case '^':
                            cout<< '>';
                            break;
                        case '>':
                            cout<< 'v';
                            break;
                        case 'v':
                            cout<< '<';
                            break;
                        default:
                            cout << '.';
                            break;
                    }
                }
                cout << endl;
            }
            break;
        case 2:
            for(int i=n-1;i>=0;i--){
                for(int j=n-1;j>=0;j--){
                    switch(MAP[i][j]){
                        case '<':
                            cout<< '>';
                            break;
                        case '^':
                            cout<< 'v';
                            break;
                        case '>':
                            cout<< '<';
                            break;
                        case 'v':
                            cout<< '^';
                            break;
                        default:
                            cout << '.';
                            break;
                    }
                }
                cout << endl;
            }
            break;
        case 3:
            for(int i=n-1;i>=0;i--){
                for(int j=0;j<n;j++){
                    switch(MAP[j][i]){
                        case '<':
                            cout<< 'v';
                            break;
                        case '^':
                            cout<< '<';
                            break;
                        case '>':
                            cout<< '^';
                            break;
                        case 'v':
                            cout<< '>';
                            break;
                        default:
                            cout << '.';
                            break;
                    }
                }
                cout << endl;
            }
            break;

    }
    
}
