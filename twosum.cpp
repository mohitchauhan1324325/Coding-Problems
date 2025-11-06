#include<iostream>
#include<stack>

using namespace std;

int main(){

  int t;
  int a[5]={5,4,3,2,1};

  cout<< "Enter the target number";
  cin>> t;

  int n = sizeof(a)/sizeof(a[0]);

  for(int i=0; i<=n; i++){
    for(int j=0; j<=n; j++){
      if(a[i] + a[j] == t){
        if(i==j){
          continue;
        }        
else{

        cout<<"[" << i << "," << j << "]";
        
}
       a[i++] = a[i];
       a[j++] = a[j];
      }
    }
  }

  return 0;
}