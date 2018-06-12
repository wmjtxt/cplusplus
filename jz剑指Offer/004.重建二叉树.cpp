///
/// @file    :4.重建二叉树.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-06-12 10:19:44(NewYork time)
 /// @quote   :
 ///
#include <iostream>
#include <vector>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) {
        //root
		int inlen = vin.size();
		if(inlen == 0)
			return NULL;
		TreeNode *root = new TreeNode(pre.front());
		int rootIndex = 0;
		vector<int>::iterator it = vin.begin();
		while((*it) != pre.front())
		{
			++it;
			++rootIndex;
		}
		//cout << "rootIndex = " << rootIndex << endl;
		vector<int> leftPre, leftVin, rightPre, rightVin;
		//left
		for(int idx = 0; idx < rootIndex; ++idx)
		{
			leftPre.push_back(pre[idx + 1]);
		}
		for(int idx = 0; idx < rootIndex; ++idx)
		{
			leftVin.push_back(vin[idx]);
		}
		//right
		for(size_t idx = rootIndex+1; idx < vin.size(); ++idx)
		{
			rightPre.push_back(pre[idx]);
		}
		for(size_t idx = rootIndex+1; idx < vin.size(); ++idx)
		{
			rightVin.push_back(vin[idx]);
		}
		root->left = reConstructBinaryTree(leftPre, leftVin);
		root->right = reConstructBinaryTree(rightPre, rightVin);
		//cout << "root->val = " << root->val << endl;
		return root;
    }
}; 
#include <iostream>
using namespace std;

int main(){
	
	return 0;
}
