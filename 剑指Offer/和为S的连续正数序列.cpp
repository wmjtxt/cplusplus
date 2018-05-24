 ///
 /// @file    :和为S的连续正数序列.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-05-19 19:30:41(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
	vector<vector<int> > FindContinuousSequence(int sum){
		vector<vector<int> > res;
		if(sum < 3) return res;
		int mid = (sum+1)/2;
		for(int i = 1; i <= mid; i++){
			vector<int> element;
			int temp = 0;
			for(int j = i; j <= mid; j++){
				temp += j;
				element.push_back(j);
				if(temp == sum){
					res.push_back(element);
					break;
				}
				else if(temp > sum){
					break;
				}
			}
		}
		return res;
	}
};

int main(){
	Solution test;
	int s;
	cin >> s;
	vector<vector<int> > v = test.FindContinuousSequence(s);
	for(auto m : v){
		for(auto n : m)
			cout << n << " ";
		cout << endl;
	}
	return 0;
}
