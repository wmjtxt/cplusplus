#include <iostream>
#include <vector>

using namespace std;

class Solution{
public:
	vector<int> twoSum(vector<int>& nums,int target){
		vector<int> res;
		for(int i = 0; i < nums.size(); ++i){
			for(int j = i+1; j < nums.size(); ++j){
				if(nums[i] + nums[j] == target){
					res.push_back(i);
					res.push_back(j);
					break;	
				}
		}
			if(!res.empty())
				break;
		}
		return res;
	}
};

int main(){
	Solution s;
	vector<int> arr = {2,7,11,15},res;
	int target = 9;
	res = s.twoSum(arr,target);
	vector<int>::iterator it;
	for(it = res.begin(); it != res.end(); ++it)
		cout << *it << ",";
	return 0;
}
