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
    int getDecimalValue(ListNode* head) {
        if(head->next==NULL){
 return head->val*pow(2,0);
        }
         ListNode* temp=head;
    
int cnt=0;
         while(temp->next!=NULL){//1 0 1 0
temp=temp->next;
cnt++;//no of nodes
         }
temp=head;
int data=0;
    while(temp->next!=NULL){

       data+= temp->val*pow(2,cnt--);
temp=temp->next;
        
    }
   data+= temp->val*pow(2,cnt--);
    return data ;

    }
};
