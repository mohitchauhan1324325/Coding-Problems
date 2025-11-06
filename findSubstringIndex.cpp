#include <bits/stdc++.h>

using namespace std;

class Solution{

    public:

    int strStr(string heystack, string needle){

        int n = heystack.size();
        int m = needle.size();

        if(m == 0) return 0;

        for(int i = 0; i <= n - m; i++){

            int j = 0;

            while(j < m && heystack[i + j] == needle[j]){
                j++;
            }
            
            if(j == m) return i;

        }

        return -1;
    }
};

int main() {

    string a = "nbfseiofoihewrohnkfewifpoj";
    string b = "ofo";

    Solution sol;

    int index = sol.strStr(a, b);

    cout << index;

     return 0;
}