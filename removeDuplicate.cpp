#include <bits/stdc++.h>

using namespace std;

class Solution{

    public:

    int removeDuplicates(vector<int>& v){

        int n = v.size();

        if(n <= 1){

            return n;
        }

        int index = 0;

        for(int i = 0; i < n; i++){
            int dupl = 0; 

            for(int j = 0; j < index; j++){

                if(v[i] == v[j]){
                    dupl = 1;
                    break;
                }
            }
            
            if(!dupl){
                v[index] = v[i];
                index++;
            }
        }
        return index;
    }

};

int main() {

    vector<int> arr = {2, 4, 6, 2, 6, 8, 4, 7, 3};

    Solution s;

    int size = s.removeDuplicates(arr);
    
    for(int i = 0; i < size; i++){

        cout << arr[i] << " ";
    }
    
     return 0;
}


