#include <bits/stdc++.h>

using namespace std;


int main() {
            
    vector<int> a = {2, 1, 6, 5, 7, 8};
    vector<int> b = {3, 7, 4, 8, 7, 9, 3};

    int aSize = a.size();
    int bSize = b.size();
    
    int resSize = aSize + bSize;

    vector<int> res(resSize);

    for(int i = 0; i < aSize; i++){
        res[i] = a[i];
    }
    for(int i = 0; i < bSize; i++){
        res[aSize + i] = b[i];
    }

    for(int x : res){
        cout << x << " ";
    }

     return 0;
}