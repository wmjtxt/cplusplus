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
        while(!s1.empty() || !s2.empty()){
            vector<int> line;
			if(!s1.empty()){
				 while(!s1.empty()){
           		     line.push_back(s1.top()->val);
           		     if(s1.top()->left!=NULL)
           		         s2.push(s1.top()->left);
           		     if(s1.top()->right!=NULL)
           		         s2.push(s1.top()->right);
           		     s1.pop();
           		 }
           		 res.push_back(line);
			}
			else if(!s2.empty()){
           		 while(!s2.empty()){
           		     line.push_back(s2.top()->val);
           		     if(s2.top()->right!=NULL)
           		         s1.push(s2.top()->right);
           		     if(s2.top()->left!=NULL)
           		         s1.push(s2.top()->left);
           		     s2.pop();
           		 }
           		 res.push_back(line);
			}
        }
        return res;
    }
};


int main(){
	Solution test;
	return 0;
}
