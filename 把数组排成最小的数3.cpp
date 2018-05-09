 ///
 /// @file    :把数组排成最小的数.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-05-09 22:18:54(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


class Solution{
public:
	string PrintMinNumber(vector<int> numbers){
		string res;
		sort(numbers.begin(), numbers.end(), cmp);
		for(auto m : numbers)
			res += to_string(m);
		return res;
	}
	
	static bool cmp(int a, int b){
		string str1,str2;
		str1 += to_string(a)+to_string(b);
		str2 += to_string(b)+to_string(a);
		return str1 < str2;
	}
};

int main(){
	Solution s;
	vector<int> a={2,32,321};
	cout << s.PrintMinNumber(a) << endl;
	return 0;
}
