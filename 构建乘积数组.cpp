 ///
 /// @file    :构建乘积数组.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-05-22 14:05:42(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
using namespace std;
class Solution{
public:
	vector<int> multiply(const vector<int> &A){
		int len = A.size();
		vector<int> res(len);
		for(int i = 0; i < len; i++){
			res[i] = 1;
			for(int j = 0; j < len; j++){
				if(j != i)
					res[i] *= A[j];
			}
		}
		return res;
	}
};
int main(){
	
	return 0;
}
