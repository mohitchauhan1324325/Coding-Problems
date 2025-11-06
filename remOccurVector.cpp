#include <bits/stdc++.h>

using namespace std;


int main() {
              
    vector<int> a = {2, 1, 6, 5, 7, 8, 3, 7, 4, 8, 7, 9, 3};

    int aSize = a.size();

    int n;

    cin >> n;
    int k = 0;

    for(int i = 0; i < aSize; i++){
        
        if(a[i] != n){
            a[k] = a[i];
            k++;
        }
    }

    a.resize(k);

    for(int x : a){
        cout << x << " ";
    }

     return 0;
}


