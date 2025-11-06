#include <bits/stdc++.h>

using namespace std;

class Solution{

    public:

    void waveSort(vector<int>& v){

        int n = v.size();
        int start, end;

        for(int i = 0; i < n; i+=2){

            start = i;
            end = i + 1 < n ? i + 1 : n - 1;

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


    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};

    Solution s;

    s.waveSort(arr);
    
    for(int i: arr){

        cout << i << " ";
    }

     return 0;
}