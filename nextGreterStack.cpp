#include <bits/stdc++.h>

using namespace std;

class Solution{

    public:

    vector<int> nextGreaterElement(vector<int>& nums){

        stack<int> st;

        int size = nums.size();

        vector<int> ans(size, -1);

        for(int i = size - 1; i >= 0; i--){
            // check 
            while(!st.empty() && st.top() <= nums[i]){

                st.pop();
            }
            if(!st.empty()){
                
                ans[i] = st.top();
            }

            st.push(nums[i]);
        }

        return ans;
    }
};

int main() {
              
    vector<int> a = {4, 5, 2, 25};

    Solution s;

    vector<int> res = s.nextGreaterElement(a);

    for(int x: res){
        cout << x << " ";
    }

     return 0;
}

