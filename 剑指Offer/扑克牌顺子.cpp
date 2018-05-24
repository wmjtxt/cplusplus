 ///
 /// @file    :扑克牌顺子.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-05-20 15:51:41(NewYork time)
 /// @quote   :
 ///

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution{
public:
	bool IsContinuous(vector<int> numbers){
		int len = numbers.size();
		int d = 0;
		sort(numbers.begin(),numbers.end());
		for(int i = len-1; i > 0; i--){
			if(numbers[i-1] == 0)
				break;
			if(numbers[i] - numbers[i-1] == 0)
				return false;
			d += numbers[i] - numbers[i-1];
		}
		if(d <= len-1)
			return true;
		else return false;
	}
};

int main(){
	
	return 0;
}
