 ///
 /// @file    :数组中的逆序对.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-05-10 14:54:11(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	int InversePairs(vector<int> data){
		int cnt;
		for(int i = 0; i < data.size(); i++){
			for(int j = i+1; j < data.size(); j++){
				if(data[i] > data[j])
					cnt++;
			}
		}
		return cnt%1000000007;
	}
};


int main(){
	Solution s;
	int n;
	while(cin >> n){
		vector<int> a(n);
		for(int i = 0; i < n; i++)
			cin >> a[i];
		for(auto m : a) cout << m << " ";
		cout << s.InversePairs(a) << endl;
	}
	return 0;
}
