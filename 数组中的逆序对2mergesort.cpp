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
		int len = data.size();
		vector<int> temp(len);
		long long ans = msort(data, temp, 0, len-1);
		return ans%1000000007;
	}
	int msort(vector<int> &data, vector<int> &temp, int left, int right){
		if(left == right) return 0;
		int mid = (left+right)/2;
		long long lefthand = msort(data, temp, left, mid);
		long long righthand = msort(data, temp, mid+1, right);
		int i = 0, j = mid+1, k = 0;
		long long count = 0;
		while(i <= mid && j <= right)
		{
			if(data[i] <= data[j])
				temp[k++] = data[i++];
			else{
				temp[k++] = data[j++];
				count += (mid-i+1);
			}
		}
		while(i <= mid) temp[k++] = data[i++];
		while(j <= right) temp[k++] = data[j++];
		for(i = 0; i <= right; i++){
			data[i] = temp[i];
		}
		return lefthand+righthand+count;
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
