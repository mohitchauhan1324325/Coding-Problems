#include <bits/stdc++.h>

using namespace std;

class Solution{

    public:

    char nonRepeat(string &s){

        int n = s.length();

        for(int i = 0; i < n; i++){

            bool found = false;

            for(int j = 0; j < n; j++){

                if(i != j && s[i] == s[j]){

                    found = true;
                    break;
                }
            }

            if(!found){

                return s[i];
            }
        }
        return '$';
    }

};

int main() {

    string s = "rrrrrrrrrrrrrrc";
    Solution sol;
    cout << sol.nonRepeat(s);

     return 0;
}