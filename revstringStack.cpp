#include <bits/stdc++.h>

using namespace std;

class Solution {

    public:

    stack<char> reverse(string s){

        stack<char> a;

        for(int i = 0; i < s.size(); i++){

            a.push(s[i]);
        }

        return a;       
    }
};

int main() {
              
    Solution s;

    string str = "hello";

    stack<char> v = s.reverse(str);
    
    while(!v.empty()){

        cout << v.top();
        v.pop();
    }

     return 0;
}