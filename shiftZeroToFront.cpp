#include <bits/stdc++.h>

using namespace std;

class Solution{

    public:

    void segregate(vector<int> &v){

        int n = v.size();
        int count = 0;
        int c = 0;

        for(int i: v){
            
            if(i == 0){
            count++;
            }
        }

        for(int i = 0; i < n; i++){

            if(v[i] == 0){
                
                if(c > count){
                    return;
                }

                int start = c;
                int end = i;

                int temp = v[start];
                v[start] = v[end];
                v[end] = temp;

                c++;
            }

        }

    }

};

int main() {

    vector<int> arr = {0, 0, 1, 0, 4, 0};

    Solution sol;

    sol.segregate(arr);

    for(int i: arr){

        cout << i << " ";
    }

    return 0;
}