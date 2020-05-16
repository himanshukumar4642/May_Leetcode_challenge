/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        if(head==NULL)
            return NULL;
        ListNode* odd=head;
        ListNode* even=head->next;
        
        ListNode* feven=even;
        while(true){
            if(odd==NULL||even==NULL||even->next==NULL){
                odd->next=feven;
                break;
            }
            odd->next=even->next;
            odd=even->next;
            if(odd->next==NULL){
                odd->next=feven;
                even->next=NULL;
                break;
            }
            even->next=odd->next;
            even=odd->next;
        }
        return head;
    }
};
