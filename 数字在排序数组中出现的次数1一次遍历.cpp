 ///
 /// @file    :数字在排序数组中出现的次数.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-05-10 16:24:47(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
	int GetNumberOfK(vector<int> data, int k){
		int start = 0, end = 0, flag = 0, i;
		for(i = 0; i < data.size(); i++){
			if(data[i] == k){
				start = i;
				flag = 1;
			}
			if(data[i] > k){
				end = i;
				break;
			}
		}
		if(!flag) return 0;
		if(i == data.size()) end = data.size();
		return end-start;
	}
};
int main(){
	
	return 0;
}
