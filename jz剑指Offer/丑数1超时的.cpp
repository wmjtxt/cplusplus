 ///
 /// @file    :丑数.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-05-10 12:45:05(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
using namespace std;


class Solution{
public:
	int GetUglyNumber_Solution(int index){
		int res = 0;
		while(index >= 1){
			res++;
			int i = res;
			if(i!=1 && i%2 && i%3 && i%5) continue;
			while(i%2 == 0) i/=2;
			while(i%3 == 0) i/=3;
			while(i%5 == 0) i/=5;
			if(i == 1)
				index--;
		}
		return res;
	}
};

int main(){
	Solution s;
	int n;
	while(cin >> n){
		cout << s.GetUglyNumber_Solution(n) << endl;
	}
	return 0;
}
