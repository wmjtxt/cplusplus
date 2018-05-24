/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};
*/
class Solution {
public:
    ListNode* deleteDuplication(ListNode* pHead)
    {
        ListNode* pcur = pHead;
        ListNode* ppre = pHead;
        int flag = 0;//判断上一个节点该不该删除
        while(pcur != NULL){
            if(pcur->next==NULL)
                break;
            if(pcur->val != pcur->next->val){
                if(flag==1){
                    if(pcur==pHead){
                        pHead=pHead->next;
                    }
                    else{
                        ppre->next = pcur->next;
                        pcur = ppre->next;
                    }
                    flag=0;
                }
                else{
                    ppre = pcur;
                    pcur = pcur->next;
                }
            }
            else{
                flag = 1;
                if(pcur==pHead){
                    pHead->next = pcur->next->next;
                }
                else{
                    pcur->next = pcur->next->next;
                }
            }
        }
        if(flag==1){
            if(pcur==pHead){
                pHead=pHead->next;
            }
            else{
                ppre->next = pcur->next;
                pcur = ppre->next;
            }
        }
        return pHead;
    }
};