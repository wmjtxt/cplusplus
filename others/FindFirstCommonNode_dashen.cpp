 ///
 /// @file    :FindFirstCommonNode.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-05-07 21:41:12(NewYork time)
 /// @quote   :
 //

#include <iostream>
using namespace std;

struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};
class Solution {
public:
    ListNode* FindFirstCommonNode( ListNode* pHead1, ListNode* pHead2) {
		ListNode *p1 = pHead1;
		ListNode *p2 = pHead2;
		while(p1!=p2){
			p1 = (p1==NULL ? pHead2 : p1->next);
			p2 = (p2==NULL ? pHead1 : p2->next);
		}
		return p1;
    }
};

int main(){
	return 0;
}
