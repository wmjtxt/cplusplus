 ///
 /// @file    :按之字形顺序打印二叉树.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-05-25 21:50:59(NewYork time)
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
//用两个栈实现
class Solution {
public:
    vector<vector<int> > Print(TreeNode* pRoot) {
		vector<vector<int> > res;
        stack<TreeNode*> s1, s2;
		s1.push(root);
		while(!s1.empty() && !s2.empty()){
			vector<int> line1;
			while(!s1.empty()){
				s2.push(s1.top()->left);
				s2.push(s1.top()->right);
				line1.push_back(s1.top()->val);
				s1.pop();
			}
			res.push_back(line1);
			vector<int> line2;
			while(!s2.empty()){
				s1.push(s2.top()->right);
				s1.push(s2.top()->left);
				line2.push_back(s2.top()->val);
				s2.pop();
			}
			res.push_back(line2);
		}
    }
};


int main(){
	Solution test;
	return 0;
}
