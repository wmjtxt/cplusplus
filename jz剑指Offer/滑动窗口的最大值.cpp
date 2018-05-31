 ///
 /// @file    :滑动窗口的最大值.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-05-31 21:22:11(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
	vector<int> maxInWindows(const vector<int>& num, unsigned int size){
		int length = num.size() - (int)size + 1;
		vector<int> res;
		if(size == 0)
			return res;
		vector<int> temp(size);
		for(int i = 0; i < length; i++){
			int idx = i;
			int maxv = 0;
			for(int j = 0; j < (int)size; idx++,j++){
				temp[j] = num[idx];
				if(maxv < temp[j])
					maxv = temp[j];
			}
			res.push_back(maxv);
		}
		return res;
	}
};


int main(){
	
	return 0;
}
