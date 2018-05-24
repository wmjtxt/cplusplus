 ///
 /// @file    :整数中1出现的次数.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-05-09 15:38:25(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

class Solution{
public:
	int NumberOf1Between1AndN_Solution(int n){
		int dp[n+1];
		dp[0] = 0;
		//dp[1] = 1;
		for(int i = 0; i < n; i++){
			dp[i+1] = dp[i]+cnt1Of(i+1);
		}
		return dp[n];
	}

	int cnt1Of(int n){
		int temp = n, base = 1, cnt = 0;
		while(temp > 9){
			temp /= 10;
			base *= 10;
		}//计算n的位数
		temp = n;
		while(base > 0){
			if(temp/base==1) cnt++;
			temp %= base;
			base /= 10;
		}//计算n中1的个数
		return cnt;
	}
};

int main(){
	Solution s;
	int num;
	while(cin >> num){
		cout << "1到" << num << "中1的个数为:" << s.NumberOf1Between1AndN_Solution(num) << endl;
	}
	return 0;
}
