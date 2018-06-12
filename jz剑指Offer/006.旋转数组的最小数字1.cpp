 ///
 /// @file    :6.旋转数组的最小数字.cpp
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
        vector<int>::iterator it;
	    if(rotateArray.size() == 0)
			return 0;
        for(it = rotateArray.begin(); it < rotateArray.end()-1; ++it)
        {
			if(*it > *(it+1))
				break;
		}
        return *(it+1);
    }
};
int main(){
	
	return 0;
}
