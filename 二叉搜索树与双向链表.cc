#include <iostream>
using namespace std;

struct TreeNode{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x):
	val(x), left(NULL), right(NULL){}
};

class Solution{
public:
    TreeNode* Convert(TreeNode* root){
    	if(root == NULL)
	    return NULL;
	if(root->left == NULL && root->right == NULL)
	    return root;
	TreeNode* left = Convert(root->left);
	TreeNode* p = left;
	while(p != NULL && p->right != NULL) p = p->right;
	if(left != NULL){ p->right = root; root->left = p;}
	TreeNode* right = Convert(root->right);
	if(right != NULL){ right->left = root; root->right = right;}
	return left != NULL ? left : root;
    }
};

int main(){
    Solution s;
    return 0;
}
