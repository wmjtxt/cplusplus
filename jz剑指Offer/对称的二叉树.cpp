 ///
 /// @file    :对称的二叉树.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-06-02 21:26:57(NewYork time)
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
public:
    bool isSymmetrical(TreeNode* pRoot)
    {
		if(pRoot == NULL)
			return true;
		return comroot(pRoot->left,pRoot->right);
    }
	bool comroot(TreeNode * left, TreeNode* right){
		if(left == NULL) return right==NULL;
		if(right == NULL) return false;
		if(left->val != right->val) return false;
		return comroot(left->right, right->left) && comroot(left->left,right->right);
	}

};
int main(){
	
	return 0;
}
