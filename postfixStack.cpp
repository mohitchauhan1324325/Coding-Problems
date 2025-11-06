#include <bits/stdc++.h>

using namespace std;

class Solution{

    public:

    int postfix(vector<string>& str){

        stack<int> c;

        for(string x : str){
            // check if x is number
            if(isdigit(x[0]) || (x.size() > 1 && x[0] == '-')){

                c.push(stoi(x));    // convert string to int 
            }
            else{

                int val1 = c.top();c.pop();     // right operand
                int val2 = c.top();c.pop();     // left operand

                if(x == "+")c.push(val2 + val1);
                else if(x == "-")c.push(val2 - val1);
                else if(x == "*")c.push(val2 * val1);
                else if(x == "/")c.push(val2 / val1);
            }
        }
        return c.top();
    }
};

int main() {

    vector<string> str = {"2","3","1","*","+","9","-"};

    Solution s;

     cout << s.postfix(str);

     return 0;
}