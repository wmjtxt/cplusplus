 ///
 /// @file    :quickhand1.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-05-10 19:32:39(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

int main(){
	int k;
	cin >> k;
	int m[k], n[k];
	for(int i = 0; i < k; i++)
		cin >> m[i] >> n[i];

	int dp[1000][1000];
	dp[0][0] = 1;
	for(int i = 1; i < 1000; i++)
		for(int j = 1; j < 1000; j++){
			if(i < j)
				dp[i][j] = 0;
			else if(i == j)
				dp[i][j] = 1;
			else dp[i][j] = dp[i-1][j] + dp[i-1][j-1];
		}
	for(int i = 0; i < k; i++)
		cout << dp[m[i]+1][n[i]+1] << endl;
	return 0;
}
