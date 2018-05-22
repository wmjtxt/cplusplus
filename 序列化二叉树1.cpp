 ///
 /// @file    :序列化二叉树.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-05-22 16:14:23(NewYork time)
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
    char* Serialize(TreeNode *root) {
		char* res = new char[100];
		res+=toor->val;
		if(root->left != NULL) res+=Serialize(root->left);
		if(root->right != NULL) res+=Serialize(root->right);
		return res;
    }
    TreeNode* Deserialize(char *str) {
		TreeNode* root = NULL;
		root->val = str[0];
		for(int i = 0; i < strlen(str); i++){
			
		}
		return root;
    }
};


int main(){
	
	return 0;
}
