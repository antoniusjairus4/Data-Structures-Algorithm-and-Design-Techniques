#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;

    Node(int val){
        data = val;
        next = nullptr;
    }
};

Node* removeNthFromEnd(Node* head, int n){
    
    int count = 0;
    Node* temp = head;

    while(temp != nullptr){
        count++;
        temp = temp->next;
    }

    int pos = count - n;

    if(pos == 0){
        return head->next;
    }

    Node* del = head;
    for(int i = 0; i < pos - 1; i++){
        del = del->next;
    }

    del->next = del->next->next;

    return head;
}

int main()
{
    int n;
    cout << "Enter number of nodes: ";
    cin >> n;

    Node* head = nullptr;
    Node* tail = nullptr;

    cout << "Enter values:\n";

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;

        Node* newNode = new Node(x);

        if(head == nullptr){
            head = newNode;
            tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
    }

    int k;
    cout << "Enter n (node to remove from end): ";
    cin >> k;

    head = removeNthFromEnd(head, k);

    Node* temp = head;
    while(temp != nullptr){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;

    return 0;
}