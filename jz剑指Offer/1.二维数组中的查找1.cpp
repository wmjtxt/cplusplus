 ///
 /// @file    :1.二维数组中的查找1.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-05-24 11:21:05(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        vector<vector<int> >::iterator itrow;
		vector<int>::iterator itcol;
		int col = 0;
		for(itrow = array.begin(); itrow < array.end(); itrow++)
		{
			for(itcol = (*itrow).begin(); itcol < (*itrow).end(); itcol++, col++)
			{
				if(target < *itcol)
					break;
				else if(target == *itcol)
				{
					return true;
				}
				else continue;
			}
			//if(!col) break;
		}
		return false;
    }
};

int main(){
	
	return 0;
}
