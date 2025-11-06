#include <bits/stdc++.h>

using namespace std;

class Solution{

    public:
    
    bool isEqual(string s){

    stack<char> a;

    for(char c : s){

        if(c == '{' || c == '[' || c == '('){

            a.push(c);
        }
        else{

            if(a.empty()) return false;

            char top = a.top();

            if((c == '}' && top == '{') || (c == ']' && top == '[') || (c == ')' && top == '(')){

                a.pop();
            }
        else{
            return false;
        }
    }
    }
    return a.empty();
}

};
int main() {

    string s = "{}()[]";

    Solution E;

    if(E.isEqual(s)){
        cout << "True";
    }
    else{
        cout << "False";
    }

     return 0;
}