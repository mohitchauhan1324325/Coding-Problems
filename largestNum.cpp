#include <bits/stdc++.h>

using namespace std;

class Solution{

 public:

 int maxNum(vector<int>& v){

    int largest = -1;

    int n = v.size();

    for(int i = 0; i < n; i++){

        if(v[i] > largest){

            largest = v[i];
        }
    }
    return largest;

 }

};

int main() {
    
    vector<int> arr = {2, 5, 6, 3};

    Solution s;

    int max = s.maxNum(arr);

    cout << max ;

     return 0;
}