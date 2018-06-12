 ///
 /// @file    :8.跳台阶.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-06-12 10:58:00(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;
class Solution {
public:
    int jumpFloor(int number) {
        int res1 = 1, res2 = 2;
		while(--number)
		{
			res2 += res1;
			res1 = res2 - res1;
		}
		return res1;
    }
};
int main(){
	
	return 0;
}
