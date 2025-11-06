#include <bits/stdc++.h>

using namespace std;

class Solution{

 public:

 void revGroup(vector<int>& v, int k){

    int n = v.size();

    int start, end;

    for(int i = 0; i < n; i+=k){

        int start = i;
        
        if(i + k - 1 < n - 1){
            end = i + k - 1;
        }
        else{
            end = n - 1;
        }

        while(start < end){

            int temp = v[start];
            v[start] = v[end];
            v[end] = temp;
            start++;
            end--;
        }

    }

 }

};

int main() {

    vector<int> arr = {4, 6, 3, 7, 9, 44, 66, 34, 7, 5};

    int k = 3;

    Solution s;

    s.revGroup(arr, k);

    for(int x: arr){

        cout << x << " ";
    }

     return 0;
}