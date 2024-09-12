#include <iostream>
#include <vector>
using namespace std;


int main(){
    vector < pair<int,int > > p[3];
    
    for(int i=0;i<3;i++){
        int x,y;
        cin >> x >> y;

        p[i].push_back(make_pair(x,y));
        
    }


    int a[3][2];
    for(int i=0;i<3;i++){
            a[i][0]=p[i][0].first + p[(i+2)%3][0].first - p[(i+1)%3][0].first;
            a[i][1]=p[i][0].second+p[(i+2)%3][0].second-p[(i+1)%3][0].second;
    }

    for(int i=0;i<3;i++){
        cout << a[i][0] << " " << a[i][1] << endl;
    }
}
