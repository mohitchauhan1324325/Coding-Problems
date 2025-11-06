#include <bits/stdc++.h>

using namespace std;

class Solution{

    public:

    int maxCount(vector<int> &v){

        int n = v.size();

        sort(v.begin(), v.end());

        int count = 1;
        int maxCount = 0;

        for(int i = 1; i < n; i++){

            if(v[i] == v[i - 1]){

                count++;
            }
            else{

                if(maxCount < count){
                    maxCount = count;
                }
                count = 1;
            }
        }

        return max(maxCount, count);
    }
};

int main() {

    vector<int> arr = {1, 0, 0, 1, 1, 0, 0, 1, 0, 1};

    Solution sol;

    cout << sol.maxCount(arr) ;

     return 0;
}
    