#include <bits/stdc++.h>

using namespace std;

class Solution{

    public:

    vector<vector<int>> multMat(vector<vector<int>>& a, vector<vector<int>>& b){

        int n = a.size();
        int m = a[0].size();
        int p = b[0].size();

        vector<vector<int>> res(n, vector<int>(p, 0));

        for(int i = 0; i < n; i++){
            for(int j = 0; j < p; j++){
                for(int k = 0; k < m; k++){

                    res[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        return res;
    }

};

int main() {

    vector<vector<int>> a = {{3, 7},
                             {1, 6}};
    vector<vector<int>> b = {{3, 6},
                             {4, 3}};
    
    Solution sol;

    vector<vector<int>> c = sol.multMat(a, b);

    for(auto& row: c){
        for(auto val: row){

            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}