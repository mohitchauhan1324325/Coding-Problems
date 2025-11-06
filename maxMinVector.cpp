#include <bits/stdc++.h>

using namespace std;


int main() {
               
    vector<int> a = {2, 4, 6, 8, 9, 1, 5, 3, 10, 7};

    int aSize = a.size();
    
    int min = a[0];
    int max = a[0];

    for(int i = 1; i < aSize; i++){

        if(a[i] < min){
            min = a[i];
        }
        if(a[i] > max){
            max = a[i];
        }

    }

    cout << min << " " << max;

     return 0;
}