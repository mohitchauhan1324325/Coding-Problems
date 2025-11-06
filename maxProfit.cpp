#include <bits/stdc++.h>

using namespace std;

class Solution{

    public:

    int maxVal(vector<int>& v){

        int n = v.size();
        int res = 0;
        int min = v[0];

        for(int i = 1; i < n; i++){
            
            if(v[i] < min){
                min = v[i];
            }

            if(v[i] - min > res){
                res = v[i] - min;
            }
        }

        return res;
    }

};

int main() {

    vector<int> arr =  {2, 5, 3, 5, 1, 7, 2};

    Solution s;

    int max = s.maxVal(arr);

    cout << max;

     return 0;
}