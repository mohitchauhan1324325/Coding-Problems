#include <bits/stdc++.h>

using namespace std;

class Solution{

    public:

    int sumSubArr(vector<int> &nums){

        int n = nums.size();
        int res = 0, temp = 0;

        for(int i = 0; i < n; i++){
            
            // We can clearly see that, For any element arr[i] in an array of size n, it appears in exactly (i + 1) * (n - i) subarrays.
            res += (nums[i] * (i + 1) * (n - i));        

        }

        return res;
    }
};

int main() {
+

    vector<int> arr = {1, 4, 5, 3, 2};

    Solution sol;

    int res = sol.sumSubArr(arr);

    cout << res;

     return 0;
}
1
`    0