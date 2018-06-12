 ///
 /// @file    :7.斐波那契数列.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-06-12 10:56:41(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;
class Solution {
public:
    int Fibonacci(int n) {
        int f = 0, g = 1;
        while(n--)
        {
            g += f;
            f = g - f;
        }
        return f;
    }
};
int main(){
	
	return 0;
}
