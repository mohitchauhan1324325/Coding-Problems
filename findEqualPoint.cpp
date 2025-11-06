#include <bits/stdc++.h>

using namespace std;

class Solution{

    public:

    int findEqualPoint(string &s){

        int n = s.length();
        int openCnt = 0;
        int closeCnt = 0;

        for(int i = 0; i < n; i++){

            if(s[i] == ')'){
                closeCnt++;
            }
        }

        for(int i = 0; i < n; i++){

            if(openCnt == closeCnt){
                return i;
            }

            if(s[i] == '('){
                openCnt++;
            }
            if(s[i] == ')'){
                closeCnt--;
            }

        }

        return -1;

    }

};

int main() {

    string s = "(()))(";

    Solution sol;

    cout << sol.findEqualPoint(s);

    return 0;
}