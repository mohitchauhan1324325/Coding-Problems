#include <bits/stdc++.h>

using namespace std;

class Solution{

    public: 

    string reverseStr(string &s){

        int left = 0; 
        int right = s.length() - 1;

        while(left < right){

            char temp = s[left];
            s[left] = s[right];
            s[right] = temp;
            left++;
            right--;

        }

        return s;

    }

};

int main() {

    string s = "Mohit";

    Solution str;

    cout << str.reverseStr(s) << endl;

     return 0;
}