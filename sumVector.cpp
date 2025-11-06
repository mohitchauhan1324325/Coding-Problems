#include <bits/stdc++.h>

using namespace std;


int main() {
              
    vector<int> a = {2, 5, 7, 3, 8, 6};

    int aSize = a.size();
    int res = 0;

    for(int i = 0; i < aSize; i++){
        res += a[i];
    }

    cout << res;

     return 0;
}