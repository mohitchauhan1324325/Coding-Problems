#include <iostream>

using namespace std;

class Stack{

    private:
        int arr[5];
        int top;

    public:

    Stack(){
        top = -1;
    }

    void push(int x){
        if(top == 4){
            cout << "Overslow" << x << endl;
            return;   
        }
        arr[++top] = x;
    }

    void pop(){
        if(top == -1){
            cout << "Underflow" << endl;
            return;
        }
        arr[top--];
    }

    bool empty(){
        return (top == -1);
    }

    void display(){
        int i = top;

        while(i > -1){

            cout << arr[i] << endl;
            i--;
        }
    }
};

int main() {
              
    Stack s;

    s.push(10);
    s.push(20);
    s.display();

    if(s.empty()){
        cout << "True";
    }
    else{
        cout << "False";
    }

     return 0;
}