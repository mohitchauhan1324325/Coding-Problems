#include <bits/stdc++.h>

using namespace std;

class Solution{

    public:

    void rev(vector<int>& v, int d){

        int n = v.size();

        for(int i = 0; i < d; i++){

            int first = v[0];

            for(int j = 0; j < n - 1; j++){

                v[j] = v[j + 1];
            }

        v[n - 1] = first;

        }

    }

};

int main() {
              
    vector<int> arr = {3, 5, 7, 5, 7, 4};
    
    int d = 2;
    int n = arr.size();

    Solution s;

    s.rev(arr, d);

    for(int i: arr){

        cout << i << " ";
    }

     return 0;
}