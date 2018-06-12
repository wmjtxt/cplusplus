 ///
 /// @file    :6.旋转数组的最小数字2.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-06-12 10:35:20(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
		if(rotateArray.size() == 0)
			return 0;
		int left = 0, right = rotateArray.size()-1;
		int mid = -1;
		while(rotateArray[left] >= rotateArray[right]){
			if(right-left == 1){
				mid = right;
				break;
			}
			mid = left + (right-left)/2;
			if(rotateArray[mid] >= rotateArray[left]) left = mid;
			if(rotateArray[mid] <= rotateArray[right]) right = mid;
		}
		return rotateArray[mid];
    }
};
int main(){
	
	return 0;
}
