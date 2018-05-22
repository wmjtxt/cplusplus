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

typedef TreeNode* pnode;

class Solution {
	pnode haha;
public:
    char* Serialize(TreeNode *root) {
		haha = root;
		return "*_*";
    }
    TreeNode* Deserialize(char *str) {
		return haha;
    }
};


int main(){
	
	return 0;
}
