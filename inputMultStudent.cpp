#include <bits/stdc++.h>

using namespace std;

class Student{

    string name;
    int rollNo;
    int marks;

    public:

    void print(){

        cout << "Enter the name";
        cin >> name;

        cout << "Enter the rollNo";
        cin >> rollNo;

        cout << "Enter the marks";
        cin >> marks;
    }

    void display(){
        cout << "Name: " << name << ", roll no:" << rollNo << ", Marks:" << marks << endl;
    }
};

int main() {

    int n;

    cin >> n;

    Student std[n];

    for(int i = 0; i < n; i++){

        std[i].print();  
    }

    for(auto &p: std){
        p.display();
    }

     return 0;
}