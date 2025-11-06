#include <bits/stdc++.h>

using namespace std;


int main() {
              
    vector<int> a = {2, 1, 6, 5, 7, 8, 3, 7, 4, 8, 7, 9, 3};

    int aSize = a.size();

    int temp;

    for(int i = 0; i < aSize - 1; i++){
        for(int j = 0; j < aSize - 1 - i; j++){

            if(a[j] > a[j + 1]){

                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    for(int x : a){

        cout << x << " ";
    }

     return 0;
}