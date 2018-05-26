 ///
 /// @file    :按之字形顺序打印二叉树.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-05-25 21:50:59(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};
//用两个栈实现
class Solution {
public:
    vector<vector<int> > Print(TreeNode* pRoot) {
		vector<vector<int> > res;
        stack<TreeNode*> s1, s2;
		if(pRoot!=NULL)
			s1.push(pRoot);
		TreeNode* node;
		while(!s1.empty() || !s2.empty()){
			vector<int> data;
			if(!s1.empty()){
				while(!s1.empty()){
					node = s1.top();
					s1.pop();
					data.push_back(node->val);
					if(node->left!=NULL)
						s2.push(node->left);
					if(node->right!=NULL)
						s2.push(node->right);
				}
				res.push_back(data);
			}
			else if(!s2.empty()){
				while(!s2.empty()){
					node = s2.top();
					s2.pop();
					data.push_back(node->val);
					if(node->right!=NULL)
						s1.push(node->right);
					if(node->left!=NULL)
						s1.push(node->left);
				}
				res.push_back(data);
			}
		}
		return res;
    }
};


int main(){
	Solution test;
	return 0;
}
