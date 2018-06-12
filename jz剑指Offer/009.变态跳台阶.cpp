 ///
 /// @file    :9.变态跳台阶.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-06-12 11:03:58(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;
class Solution {
public:
    int jumpFloorII(int number) {
        int res = 1;
		while(number-- > 1)
		{
			res *= 2;
		}
		return res;
    }
};
int main(){
	
	return 0;
}
