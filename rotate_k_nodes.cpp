
#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };



class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        while(n--){
            temp = temp->next;
        }

        if(temp == NULL){
            return head->next;
        }

        ListNode* curr = head;
        while(temp->next != NULL){
            curr = curr->next;
            temp = temp->next;
        }

        curr->next = curr->next->next;
        return head;

        // 1 2 3 4 5
    }
};