#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;
int bit[N+1], n;

void update(int i, int val) {
    while (i <= n) {
        bit[i] += val;
        i += i & -i;
    }
}

int query(int i) {
    int sum = 0;
    while (i > 0) {
        sum += bit[i];
        cout << "sum = " << sum << endl; 
        cout << "Before i = " << i << endl; 
        i -= i & -i;
        cout << "After i = " << i <<endl; 
    }
    return sum;
}

int rangeQuery(int l, int r) {
    return query(r) - query(l-1);
}

int main() {
    n = 6;  
    int arr[] = {0, 1, 2, 3, 4, 5, 6}; // index เริ่มที่ 1

    // สร้าง Fenwick Tree
    for(int i=1;i<=n;i++) {
        update(i, arr[i]);
    };

    cout << "Sum[1..3] = " << query(5) << "\n";       // 1+2+3 = 6
    // cout << "Sum[2..5] = " << rangeQuery(2,5) << "\n"; // 2+3+4+5 = 14

    // update(3, 2); // arr[3]+=2 → arr[3]=5

    // cout << "Sum[1..3] update = " << query(3) << "\n"; // 1+2+5 = 8
}
