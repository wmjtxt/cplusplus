 ///
 /// @file    :序列化二叉树.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-05-22 16:14:23(NewYork time)
 /// @quote   :
 ///
#include <string.h>
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
		if(!root) return "#";
		string value = to_string(root->val);
		value.push_back(',');
		char *left = Serialize(root->left);
		char *right = Serialize(root->right);
		char *res = new char[strlen(left)+strlen(right)+value.size()];
		strcpy(res,value.c_str());
		strcat(res,left);
		strcat(res,right);
		return res;
    }
    TreeNode* Deserialize(char *str) {
		return Deserialize2(str);
	}

	TreeNode* Deserialize2(char *&str){
		if(*str=='#'){
			str++;
			return NULL;
		}
		int num = 0;
		while(*str!=',')
			num = num*10+(*(str++)-'0');
		str++;
		TreeNode *root = new TreeNode(num);
		root->left = Deserialize2(str);
		root->right = Deserialize2(str);
		return root;
	}
};


int main(){
	Solution test;
	return 0;
}
