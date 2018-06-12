 ///
 /// @file    :3.从尾到头打印链表.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-06-12 10:12:46(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
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
    vector<int> printListFromTailToHead(ListNode* head) {
        vector<int> res;
		if(head != NULL){
			if(head->next != NULL){
				res = printListFromTailToHead(head->next);
			}
			res.push_back(head->val);
		}
		return res;
    }
};
int main(){
	
	return 0;
}
