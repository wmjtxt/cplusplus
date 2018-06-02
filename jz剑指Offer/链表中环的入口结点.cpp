 ///
 /// @file    :链表中环的入口结点.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-06-02 20:39:18(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};
//断链法
class Solution {
public:
    ListNode* EntryNodeOfLoop(ListNode* pHead)
    {
		if(pHead == NULL || pHead->next == NULL)
			return NULL;
		ListNode* p1 = pHead->next;
		ListNode* p2 = pHead;
		while(p1!=NULL){
			p2->next = NULL;
			p2 = p1;
			p1 = p1->next;
		}
		return p2;
    }
};
int main(){
	
	return 0;
}
