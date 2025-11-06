#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;
};

int main() {
    // Creating nodes
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    // Assigning values and links
    head->data = 10;
    head->next = second;
    head->prev = nullptr;

    second->data = 20;
    second->next = third;
    second->prev = head;

    third->data = 30;
    third->next = NULL;
    third->prev = second;

    // Traversing the list
    Node* current = head;
    while(current!=nullptr){
        cout << current->data << " ";
        current = current->next;
        
    }

    // Output: 10 20 30

    return 0;
}
