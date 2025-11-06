
#include <bits/stdc++.h>

using namespace std;

class Solution{

    public:

    vector<int> plusOne(vector<int> nums){

        int n = nums.size();
        int start = 0;
        int end = n - 1;

        vector<int> v;
         int res = 0;

        for(int i = 0; i < n; i++){

            res = res * 10 + nums[i];
        }
        res += 1;

        while(start < end){

            int temp = nums[start];
            nums[start] = nums[end];
            nums[end] = temp;
            start++;
            end--;
        }
       

        for(int i = 0; i < n; i++){

            int temp = res % 10;
            v.push_back(temp);
            res /= 10;
        }
        
        int s = 0;
        int e = v.size() - 1;

        while(s < e){

            int temp = v[s];
            v[s] =  v[e];
            v[e] = temp;
            s++;
            e--;

        }

        return v;
    }

};

int main() {

    vector<int> arr = {3, 5, 9};

    Solution sol;

    vector<int> res = sol.plusOne(arr);

    for(int i: res){

        cout << i << " ";
    }

     return 0;
}