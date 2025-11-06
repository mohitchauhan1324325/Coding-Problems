#include <bits/stdc++.h>

using namespace std;

class Solution{

    public:

    string largestSwap(string s){

        int n = s.size();
        char largest = '0';
        int index;

        for(int i = 0; i < n; i++){

            if(s[i] > largest){
                largest = s[i];
                index = i;
            }
        }

        char temp = s[0];
        s[0] = s[index];
        s[index] = temp;

        return s;
    }

};

int main() {

    string s = "34945";

    Solution sol;

    string res = sol.largestSwap(s);

    cout << res;

     return 0;
}