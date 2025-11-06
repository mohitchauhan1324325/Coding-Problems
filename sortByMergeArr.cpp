#include <bits/stdc++.h>

using namespace std;

class Solution{

    public:

    void mergeArr(vector<int> &v1, vector<int> &v2){

        int n = v1.size();
        int m = v2.size();

        vector<int> merge(n + m);

        for(int i = 0; i < n; i++){
            
            merge[i] = v1[i];
        }
        for(int j = 0; j < m; j++){

            merge[n + j] = v2[j];
        }

        sort(merge.begin(), merge.end());

        for(int i = 0; i < n; i++){

            v1[i] = merge[i];
        }
        for(int j = 0; j < m; j++){

            v2[j] = merge[n + j];
        }

    }

};

int main() {

    vector<int> arr1 = {2, 4, 7};
    vector<int> arr2 = {3, 6, 4};

    Solution sol;

    sol.mergeArr(arr1, arr2);

    for(int i: arr1){

        cout << i << " ";
    }

    cout << endl;

    for(int i: arr2){

        cout << i << " ";
    }

     return 0;
}