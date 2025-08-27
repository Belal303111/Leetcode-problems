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
    void addLast(ListNode* &head,int x)
{
    ListNode*p=new ListNode;
    p->val=x;
    p->next=NULL;
    if(head==NULL) head=p;
    else{
        ListNode* run=head;
        while(run->next!=NULL)
            run=run->next;
        run->next=p;
    }
}
    ListNode* oddEvenList(ListNode* head) {
    ListNode* Odd=NULL;
    ListNode* Even=NULL;
    ListNode* run=head;
    while(run!=NULL)
    {
    addLast(Odd,run->val);
    if(run->next!=NULL)
        {
            addLast(Even,run->next->val);
        }
    else break;
    if(run->next->next!=NULL)
        run=run->next->next;
    else break;
    }
    if(Odd==NULL) return Even;
    ListNode* run2=Odd;
    while(run2->next!=NULL)
        run2=run2->next;
    run2->next=Even;
    return Odd;
    }
};