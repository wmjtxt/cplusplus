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
        int size1 = 0, size2 = 0;
        ListNode* cur1 = pHead1, *cur2 = pHead2;
        while(cur1 != NULL){
            size1++;
            cur1 = cur1->next;
        }
        while(cur2 != NULL){
            size2++;
            cur2 = cur2->next;
        }
        cur1 = pHead1;
        cur2 = pHead2;
        if(size1 > size2){
            int i = 0;
            while(i++ < size1-size2){
                cur1 = cur1->next;
            }
        }
        if(size2 > size1){
            int i = 0;
            while(i++ < size2-size1){
                cur2 = cur2->next;
            }
        }
        while(cur1 != NULL && cur2 != NULL){
            if(cur1 == cur2){
                break;
            }
            cur1 = cur1->next;
            cur2 = cur2->next;
        }
        return cur1;
    }
};

int main(){
	Solution s;
	return 0;
}
