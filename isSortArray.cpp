#include <bits/stdc++.h>

using namespace std;

class Solution{

    public:

    bool isSort(vector<int> &v){

        int n = v.size();

        for(int i = 1; i < n; i++){

            if(v[i - 1] > v[i]){
                return false;
            }
        }

        return true;

    }

};

int main() {

    vector<int> arr = {10, 20, 30, 40, 50};

    Solution sol;

    cout << (sol.isSort(arr) ? "True" : "False");

     return 0;
}