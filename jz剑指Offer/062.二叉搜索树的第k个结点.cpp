 ///
 /// @file    :62.二叉搜索树的第k个结点.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-06-05 19:11:03(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};
class Solution {
	//int cnt = 0;
public:
    TreeNode* KthNode(TreeNode* pRoot, int k)
    {
		if(pRoot != NULL){ 
			TreeNode* res = KthNode(pRoot->left,k);
			if(res != NULL) return res;
			if(--k == 0) return pRoot;
			res = KthNode(pRoot->right,k);
			if(res != NULL) return res;
		}
		return NULL;
    }
};
int main(){
	
	return 0;
}
