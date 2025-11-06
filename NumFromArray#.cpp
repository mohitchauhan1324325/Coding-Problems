#include <bits/stdc++.h>

using namespace std;

class Solution{

    public:

    void revArr(vector<int> &nums){

        int n = nums.size();

        reverse(nums.begin(), nums.end());

        int count = 0;

        for(int i = 0; i <= n; i++){

            if(nums[i] == 0 || i == n){

                int start = i - count;
                int end = i - 1;
                
                while(start < end){
                    
                    swap(nums[start], nums[end]);
                    start++;
                    end--;
                }

                count = 0;
            }
            else{
                count++;
            }

        }

    }

};

int main() {

    vector<int> arr = {2, 5, 0, 7, 5, 7, 0, 6, 3, 5, 0, 5, 6, 8};

    Solution sol;

    sol.revArr(arr);

    for(int i: arr){

        cout << i << " ";
    }

     return 0;
}