#include <bits/stdc++.h>

using namespace std;

class Solution {
public:

    int climbStairs(int n){

        int curr = 0;
        int prev1 = 2;
        int prev2 = 1;

        for(int i = 3; i <= n; i++){

            curr = prev1 + prev2;
            prev2 = prev1;
            prev1 = curr;

        }

        return curr;
    }
};

int main() {

    int n = 5;

    Solution sol;

    int res = sol.climbStairs(n);

    cout << res;

    return 0;
}
