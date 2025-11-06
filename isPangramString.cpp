#include <bits/stdc++.h>

using namespace std;

class Solution{

    public:

    bool isPangram(string &s){

        int n = s.length();

        for(char c = 'a'; c <= 'z'; c++){

            bool found = false;

            for(int i = 0; i < n; i++){

                if(c == tolower(s[i])){
                    
                    found = true;
                    break;
                }

            }

            if(!found){

                return false;
            }

        }

        return true;

    }

};

int main() {

    string str = "The quick brown fx jmps v lazy dg";

    Solution sol;

    cout << (sol.isPangram(str) ? "True" : "False");

    return 0;
}