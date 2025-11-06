#include <bits/stdc++.h>

using namespace std;

class Solution{

    public:

    int totalProfit(vector<int>& v){

        int n = v.size();
        int res = 0;

        for(int i = 0; i < n; i++){

            if(v[i] < v[i + 1]){

                res += v[i + 1] - v[i];
            }

        }
        return res;
    }

};

int main() {

    vector<int> arr = {2, 4, 1, 4, 2, 5};

    Solution s;

    int maxProfit = s.totalProfit(arr);

    cout << maxProfit;

     return 0;
}