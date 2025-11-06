#include <bits/stdc++.h>

using namespace std;


int main() {
              
    vector<int> a = {2, 1, 6, 5, 7, 8, 3, 7, 4, 8, 7, 9, 3};

    int n;
    int count = 0;

    cin >> n;

    int aSize = a.size();

    for(int i = 0; i < aSize; i++){

        if(n == a[i]){
            count++;
        }
    }

    cout << count ;

     return 0;
}