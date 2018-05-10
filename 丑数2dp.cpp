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
		if(index == 0) return 0;
		vector<int> res(index);
		res[0] = 1;
		int t2 = 0, t3 = 0, t5 = 0;
		for(int i = 1; i < index; i++){
			res[i] = min(res[t2]*2, min(res[t3]*3, res[t5]*5));
			if(res[i] == res[t2]*2) t2++;
			if(res[i] == res[t3]*3) t3++;
			if(res[i] == res[t5]*5) t5++;
		}
		return res[index-1];
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
