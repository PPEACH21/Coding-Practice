#include <bits/stdc++.h>
using namespace std;
using namespace 
int main(){   
    ordered_set<int> s;
    s.insert(10); s.insert(5); s.insert(20);
    cout << s.order_of_key(15) << "\n";   // 2  (มี 5,10 < 15)
    cout << *s.find_by_order(1) << "\n";  // 10 (อันดับที่ 1)
    int rank1 = s.order_of_key(x) + 1; // find rank of x
    int kth = *s.find_by_order(k-1); // find value of k-th rank
}
