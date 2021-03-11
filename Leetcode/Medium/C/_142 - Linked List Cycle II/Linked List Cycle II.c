#include <stdio.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode *detectCycle(struct ListNode *head) {
    struct ListNode *slow = head;
    struct ListNode *fast = head->next;
    
    while(1){
        if(slow == NULL || fast == NULL){
            return NULL;
        }
        if(slow == fast){
            return slow;
        }
        slow = slow->next;
        fast = fast->next->next;
    }
}

int main(){

    return 0;
}