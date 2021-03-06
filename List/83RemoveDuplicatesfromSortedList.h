/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *wp = head;
        
        while(wp != NULL){
            if(wp->next != NULL){
                if(wp->val == wp->next->val){
                    wp->next = wp->next->next;
                }else{
                    wp = wp->next;
                }
            }else{
                wp = wp->next;
            }
        }
        return head;
    }
};
/**
 * 上面是我的代码
 * *********************************************************
 * */
 
 /**
  * 简化的代码
  * */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *p = head;
        while(p != NULL && p->next != NULL){
            if(p->val == p->next->val){
                p->next = p->next->next;
            }else{
                p = p->next;
            }
        }
        return head;
    }
};
/**
 * 不知道是否有更高效的方式，这里的Run Time还是比较高
 * */
