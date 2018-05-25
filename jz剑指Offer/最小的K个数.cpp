 ///
 /// @file    :最小的K个数.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-05-08 21:12:28(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution{
public:
	vector<int> GetLeastNumbers_Solution(vector<int> input, int k){
		int len = input.size();
		if(len <= 0 || k > len) return vector<int>();
		vector<int> res(input.begin(), input.begin()+k);
		for(auto it : res)
			cout << it << " ";
		cout << endl;
		//建堆
		make_heap(res.begin(),res.end());
		for(int i = k; i < len; i++){
			if(input[i] < res[0]){
				pop_heap(res.begin(),res.end());
				res.pop_back();
				res.push_back(input[i]);
				push_heap(res.begin(),res.end());
			}
		}
		sort_heap(res.begin(),res.end());

		return res;
	}
};

int main(){
	vector<int> arr={4,5,1,6,2,7,3,8};
	Solution s;
	arr = s.GetLeastNumbers_Solution(arr, 4);
	for(auto it : arr)
		cout << it << " ";
	cout << endl;
	return 0;
}
