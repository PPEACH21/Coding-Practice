#include <iostream>
#include <string>
using namespace std;

int main(){
    string number[8]={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

    string str;
    cin >> str;
    int max = str.length()-1;
    for(int i=max;i>=0;i--){
        int count=0;
        if(str[max]=='7' || str[max]=='9'){
            while(str[max]==str[max-1]){
                count++;
                max--;
            }
            int num=count/4;
            for(int i=0;i<num;i++){
                cout << number[max][0];
            }
            if(count%4 != 0){
                cout << number[max][count%4];
            }
        }else{
            while(str[max]==str[max-1]){
                count++;
                cout << count << " ";
                max--;
            }
            int num=count/3;
            for(int i=0;i<num;i++){
                cout << number[max][0];
            }
            if(count%3 != 0){
                cout << number[max][count%3];
            }
        }
        count=0;
    }

    // for(int i=max;i>=0;i--){
    //     cout << str[i] << " ";
    // }
        
}