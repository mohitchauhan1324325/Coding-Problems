#include <bits/stdc++.h>

using namespace std;

class Solution{

    public:

    void rearrange(vector<int>& v){

        int n = v.size();

        vector<int> pos, neg;

        for(int i = 0; i < n; i++){

            if(v[i] >= 0){
                pos.push_back(v[i]);
            }
            else{
                neg.push_back(v[i]);
            }
        }

        int posIdx = 0;
        int negIdx = 0;
        int i = 0;

        while(posIdx < pos.size() && negIdx < neg.size()){

            if(i % 2 == 0){
                v[i++] = pos[posIdx++];
            }
            else{
                v[i++] = neg[negIdx++];
            }
        }

        while(posIdx < pos.size()){
            v[i++] = pos[posIdx++];
        }

        while(negIdx < neg.size()){
            v[i++] = neg[negIdx++];
        }
    }

};

int main() {

    vector<int> arr = {2, 6, -9, -4, 4, 7, 5, -5, 3};

    Solution s;

    s.rearrange(arr);

    for(int i: arr){

        cout << i << " ";
    }

     return 0;
}