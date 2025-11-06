#include <bits/stdc++.h>

using namespace std;


class Solution{

    public:

    int secLargest(vector<int>& v){

        int max = -1, secMax = -1;
        int  n = v.size();

        for(int i = 0; i < n; i++){

            if(v[i] > max){
                max = v[i];
            }
        }
        for(int i = 0; i < n; i++){
            
            if(v[i] > secMax && v[i] != max){
                secMax = v[i];
            }

        }

        return secMax;
    }
};

int main() {
              
    vector<int> arr = {3, 4, 6, 8, 9, 2, 1};

    Solution s;

    int n = s.secLargest(arr);

    cout << n ;

     return 0;
}