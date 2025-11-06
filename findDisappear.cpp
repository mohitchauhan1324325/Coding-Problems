#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {

     vector<int> res;
     int n = nums.size();

     for(int i = 1; i <= n; i++){
          bool found = false;
          for(int j = 0; j < n; j++){

               if(nums[j] == i){
                    found = true;
                    break;
               } 
          }

          if(!found){
                    res.push_back(i);
               }
     }
     
     return res;

    }
};

int main() {

     vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};

     Solution s;

     vector<int> res = s.findDisappearedNumbers(nums);

     for(int i: res){

          cout << i << " ";
     }
     return 0;
}