 ///
 /// @file    :孩子们的游戏（圆圈中最后剩下的数）.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-05-22 10:41:31(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
	int LastRemaining_Solution(int n, int m){
		if(n < 2) return n-1;
		if(m < 1) return -1;
		//int flag[n] = {0};//标记是否出圈
		vector<int> flag(n);
		int p = 0;//报数
		int i = 0, j = 0;
		while(i < n){
			if(flag[j] == 0){
				if(p == m-1){
					flag[j] = 1;
					p = 0;
					i++;
				}
				else{
					p++;p%=m;
				}
			}
			j++;j%=n;
		}
		return (j-1+n)%n;
	}
};

int main(){
	Solution test;
	int n, m;
	while(cin >> n >> m){
		cout << test.LastRemaining_Solution(n,m) << endl;
	}
	return 0;
}
