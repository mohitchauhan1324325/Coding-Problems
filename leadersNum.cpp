#include <bits/stdc++.h>

using namespace std;

class Solution{

    public:

    vector<int> leaders(vector<int>& v){

        int n = v.size();
        vector<int> res;

        for(int i = 0; i < n; i++){
            int j;

            for(j = i + 1; j < n; j++){

                if(v[i] < v[j]){
                    break;
                }
            }

            if(j == n){
                res.push_back(v[i]);
            }
        }
        return res;
    }
};

int main() {

    vector<int> arr = {3, 4, 6, 1, 3, 5};

    Solution s;

    vector<int> res = s.leaders(arr);

    for(int i: res){

        cout << i << " ";
    }

     return 0;
}