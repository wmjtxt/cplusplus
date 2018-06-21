#include <iostream>
#include <vector>
//#include <cmath>
//#include <algorithm>

using namespace std;

class Solution {
public:
    int FindGreatestSumOfSubArray(vector<int> array) {
        int res = array[0];
		int maxv = array[0];
        for(int i = 1; i < array.size(); i++){
			maxv = max(maxv + array[i], array[i]);
			res = max(maxv, res);
        }
        return res;
    }
};

int main(){
	Solution s;
	vector<int> input;
	int num;
	while(cin >> num)
		input.push_back(num);
	cout << "连续子数组的最大和为:" << s.FindGreatestSumOfSubArray(input) << endl;
	return 0;
}
