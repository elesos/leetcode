/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
//这个题目是要返回ListNode*
//检查指针值是不是相同就可以
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode*> mp;
        ListNode *temp = headA;
       
        while(temp != NULL){
            mp.insert(temp);            
            temp = temp->next;            
        }

        temp = headB;
        while(temp != NULL){
            if(mp.find(temp) != mp.end()){
                return temp;
            }
            temp = temp->next;

        }
        
        return NULL;
    }
};