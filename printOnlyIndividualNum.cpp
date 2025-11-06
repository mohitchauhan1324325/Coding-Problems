#include <bits/stdc++.h>

using namespace std;


int main() {
              
    vector<int> arr;

    int n, a;

    cin >> n;

    for(int i = 0; i < n; i++){

        cin >> a;
        
        int duplicate = false;

        for(int j = 0; j < arr.size(); j++){

            if(arr[j] == a){
                duplicate = true;
                break;
            }
        }

        if(!duplicate){

            arr.push_back(a);
        }

    }

    for(int i: arr){

        cout << i << " ";
    }

     return 0;
}