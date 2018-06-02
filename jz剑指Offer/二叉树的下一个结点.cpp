 ///
 /// @file    :二叉树的下一个结点.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-06-02 21:45:59(NewYork time)
 /// @quote   :
 ///
//这题纯粹是我自己做出来的，简直不可思议。一开始只是抱着试一试的态度，没想到做着做着就做出来了。 
#include <iostream>
using namespace std;

struct TreeLinkNode {
    int val;
    struct TreeLinkNode *left;
    struct TreeLinkNode *right;
    struct TreeLinkNode *next;
    TreeLinkNode(int x) :val(x), left(NULL), right(NULL), next(NULL) {
        
    }
};

class Solution {
public:
    TreeLinkNode* GetNext(TreeLinkNode* pNode)
    {
		if(pNode == NULL)
			return NULL;
		if(pNode->right != NULL){
			pNode = pNode->right;
			while(pNode->left != NULL)
				pNode = pNode->left;
			return pNode;
		}
		else{
			if(pNode->next == NULL)
				return NULL;
			if(pNode == pNode->next->left)
				return pNode->next;
			else{
				while(pNode != pNode->next->left){
					pNode = pNode->next;
					if(pNode->next == NULL)
						break;
				}
				return pNode->next;
			}
		}
    }
};
int main(){
	
	return 0;
}
