#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int FindGreatestSumOfSubArray(vector<int> array) {
        int res, sum, begin;    //res是最大和，sum记录查找过程中的和，begin是连续子数组的首项
        res = begin = array[0];
        for(int i = 0; i < array.size(); i++){
            if(begin > array[i])
                continue;       //寻找开始数，小的直接跳过
            begin = sum = array[i];
            if(res < sum){      //如果sum大于res，则为最大和
                res = sum;
            }
            for(int j = i+1; j < array.size(); j++){
                sum += array[j];//每次加一个数，再进行比较
                if(res < sum){
                    res = sum;
                }
            }
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