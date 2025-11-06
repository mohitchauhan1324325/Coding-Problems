#include <bits/stdc++.h>

using namespace std;

class Solution{

    public:

    bool isAnagram(string &s1, string &s2){

        if(s1.length() != s2.length()){

            return false;
        }

        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());

        return (s1 == s2);

    }

};

int main() {

    string s1 = "mohti";
    string s2 = "mohit";

    Solution sol;

    cout << (sol.isAnagram(s1,s2) ? "True" : "False");

    return 0;
}