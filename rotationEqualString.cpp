#include <bits/stdc++.h>

using namespace std;

class Solution{

    public:

    int rotate(string &s1, string &s2){

        int n = s1.length();

        for(int i = 0; i < n; i++){

            if(s1 == s2){
                return true;
            }
            char last = s1.back();
            s1.pop_back();
            s1 = last + s1; 
            
        }

        return false;

    }

};

int main() {

    string s1 = "abcd";
    string s2 = "cbad";

    Solution sol;

    cout << (sol.rotate(s1,s2) ? "True" : "False");

     return 0;
}