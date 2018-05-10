 ///
 /// @file    :二叉树的深度.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-05-10 17:08:50(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

struct TreeNode{
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x):
	val(x),left(NULL),right(NULL){}
};

class Solution{
public:
	int TreeDepth(TreeNode *pRoot){
		if(pRoot == NULL) return 0;
		while(pRoot != NULL){
			if(pRoot->left == NULL && pRoot->right == NULL) return 1;
			else return max(TreeDepth(pRoot->left) + 1, TreeDepth(pRoot->right) + 1);
		}
	}
};


int main(){
	
	return 0;
}
