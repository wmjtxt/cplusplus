 ///
 /// @file    :把二叉树打印成多行.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-06-02 19:52:55(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
#include <queue> using namespace std;

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
	vector<vector<int> > Print(TreeNode* pRoot) {
		queue<TreeNode*> q;
		vector<vector<int> > res;
		if(pRoot == NULL) return res;
		q.push(pRoot);
		while(!q.empty()){
			int i = 0, len = q.size();
			vector<int> tmp;
			while(i < len){
				tmp.push_back(q.front()->val);
				if(q.front()->left!=NULL) q.push(q.front()->left);
				if(q.front()->right!=NULL) q.push(q.front()->right);
				q.pop();
				i++;
			}
			res.push_back(tmp);
		}
		return res;
	}
};


int main(){
	
	return 0;
}
