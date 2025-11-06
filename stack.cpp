#include <bits/stdc++.h>

using namespace std;


int main() {
              
    stack<int> a;

    a.push(10);
    a.push(20);

   while(!a.empty()){
    
  cout << a.top() << endl;

    a.pop();
  }
     return 0;
}