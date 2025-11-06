#include <bits/stdc++.h>

using namespace std;

class Solution{

    public:

    int isPalindrome(string & s){

     int left = 0;
     int right = s.length() - 1;

     while(left < right){

          if(s[left] != s[right]){
               return 0;
          }
          
          left++;
          right--;

     }

     return 1;

    }

};

int main() {

     string s = "abba";

     Solution str;

     cout << str.isPalindrome(s) << endl;

     return 0;
}