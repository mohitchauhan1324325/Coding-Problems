#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};

        unordered_map<char, string> keypad = {
            {'0', ""}, {'1', ""}, {'2', "abc"}, {'3', "def"},
            {'4', "ghi"}, {'5', "jkl"}, {'6', "mno"},
            {'7', "pqrs"}, {'8', "tuv"}, {'9', "wxyz"}
        };

        vector<string> res;
        res.push_back(""); // start with an empty string

        for (char digit : digits) {
            string letters = keypad[digit];
            vector<string> temp;

            for (string prefix : res) {
                for (char ch : letters) {
                    temp.push_back(prefix + ch);
                }
            }

            res = temp; // update result with new combinations
        }

        return res;
    }
};

int main() {
    string a = "23";
    Solution sol;

    vector<string> res = sol.letterCombinations(a);

    for (string s : res) {
        cout << s << " ";
    }

    return 0;
}
