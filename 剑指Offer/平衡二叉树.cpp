 ///
 /// @file    :平衡二叉树.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-05-16 20:44:11(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
//递归
class Solution {
public:
    bool IsBalanced_Solution(TreeNode* pRoot) {
        if(pRoot == NULL) return true;
        if(TreeDepth(pRoot->left)-TreeDepth(pRoot->right) > 1 || TreeDepth(pRoot->left)-TreeDepth(pRoot->right) < -1)
            return false;
        return IsBalanced_Solution(pRoot->left) && IsBalanced_Solution(pRoot->right);
    }
    int TreeDepth(TreeNode *pRoot){
		if(!pRoot) return 0;
        else return max(TreeDepth(pRoot->left) + 1, TreeDepth(pRoot->right) + 1);
	}
};
//居然一次过


int main(){
	Solution s;
	return 0;
}
