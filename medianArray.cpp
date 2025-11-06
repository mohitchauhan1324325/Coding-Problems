#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        nums1.insert(nums1.begin(), nums2.begin(), nums2.end());

        sort(nums1.begin(), nums1.end());

        int len = nums1.size();
        double res = 0.0;

        if(len % 2 == 0){

            int med = len / 2;

            res = (nums1[med - 1] + nums1[med]) / 2.0;
           
        }
        else {

           int med = len / 2;
           res = nums1[med]; 

        }

        return res;
    }
};

int main() {

    vector<int> arr1 = {2, 8, 6};
    vector<int> arr2 = {1, 9, 5};            // {1, 2, 5, 6, 8, 9}

    Solution sol;

    double res = sol.findMedianSortedArrays(arr1, arr2);

    cout << res;

     return 0;
}