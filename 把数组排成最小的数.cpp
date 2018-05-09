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

int highest(int number){
	while(number > 9)
		number /= 10;
	return number;
}

bool cmp(int a, int b){
	while(highest(a) == highest(b)){
		(a > 9) && (a %= 10);
		(b > 9) && (b %= 10);
	}
	return highest(a) < highest(b);
}

class Solution{
public:
	string PrintMinNumber(vector<int> numbers){
		string res;
		sort(numbers.begin(), numbers.end(), cmp);
		for(auto m : numbers)
			res += to_string(m);
		return res;
	}
};

int main(){
	Solution s;
	vector<int> a={2,32,321};
	cout << s.PrintMinNumber(a) << endl;
	return 0;
}
