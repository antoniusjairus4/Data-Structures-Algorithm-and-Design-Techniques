#include <iostream>
using namespace std;

class ListNode{
public:
    int val;
    ListNode* next;

    ListNode(int x){
        val = x;
        next = nullptr;
    }
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode* store = new ListNode(0);
        ListNode* current = store;

        int carry = 0;

        while(l1 != nullptr || l2 != nullptr || carry != 0){
            int sum = carry;

            if(l1 != nullptr){
                sum += l1->val;
                l1 = l1->next;
            }

            if(l2 != nullptr){
                sum += l2->val;
                l2 = l2->next;
            }

            carry = sum / 10;

            current->next = new ListNode(sum % 10);
            current = current->next;
        }

        return store->next;
    }
};

int main(){

    int n1;
    cout << "Enter number of nodes: ";
    cin >> n1;

    ListNode* head1 = nullptr;
    ListNode* tail1 = nullptr;

    for(int i = 0; i < n1; i++){

        int val;
        cout << "Enter value: ";
        cin >> val;

        ListNode* new_Node = new ListNode(val);

        if(head1 == nullptr){
            head1 = new_Node;
            tail1 = new_Node;
        }
        else{
            tail1->next = new_Node;
            tail1 = new_Node;
        }
    }


    int n2;
    cout << "Enter number of nodes in second list: ";
    cin >> n2;

    ListNode* head2 = nullptr;
    ListNode* tail2 = nullptr;

    for(int i = 0; i < n2; i++){

        int val;
        cout << "Enter value: ";
        cin >> val;

        ListNode* new_Node = new ListNode(val);

        if(head2 == nullptr){
            head2 = new_Node;
            tail2 = new_Node;
        }
        else{
            tail2->next = new_Node;
            tail2 = new_Node;
        }
    }


    Solution obj;
    ListNode* result = obj.addTwoNumbers(head1, head2);


    cout << "Result Linked List: ";

    while(result != nullptr){
        cout << result->val << " ";
        result = result->next;
    }

    return 0;
}