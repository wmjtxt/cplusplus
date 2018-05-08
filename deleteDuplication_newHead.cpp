#include <iostream>
using namespace std;

struct ListNode{
	int val;
	struct ListNode *next;
	ListNode(int x):val(x), next(NULL) {}
};

class Solution {
public:
	ListNode* deleteDuplication(ListNode* pHead)
	{
		//新建一个头节点
		ListNode* newHead=new ListNode(-1);
		newHead->next=pHead;
		ListNode* ppre=newHead;
		ListNode* pcur=pHead;
		ListNode* next=NULL;
		while(pcur!=NULL && pcur->next!=NULL)
		{
			next=pcur->next;
			if(pcur->val==next->val)//如果当前节点的值和下一个节点的值相等
			{
				while(next!=NULL && next->val==pcur->val)//向后重复查找
					next=next->next;
				ppre->next=next;//指针赋值，就相当于删除
				pcur=next;
			}
			else//如果当前节点和下一个节点值不等，则向后移动一位
			{
				ppre=pcur;
				pcur=pcur->next;
			}
		}
		return newHead->next;//返回头结点的下一个节点
	}
};

int main(){
	Solution s;
	return 0;
}
