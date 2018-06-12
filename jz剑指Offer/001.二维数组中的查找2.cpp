 ///
 /// @file    :1.二维数组中的查找2.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-05-24 11:21:05(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
		int rowLen = array.size();
		int colLen = array[0].size();
		int i,j;
		for(i = rowLen-1, j = 0; i >= 0 && j < colLen;)
		{
			if(target == array[i][j])
				return true;
			if(target < array[i][j])
			{
				i--;
				continue;
			}
			if(target > array[i][j])
			{
				j++;
				continue;
			}
		}
		return false;
    }
};

int main(){
	
	return 0;
}
