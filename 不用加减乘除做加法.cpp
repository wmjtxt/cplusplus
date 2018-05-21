 ///
 /// @file    :不用加减乘除做加法.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-05-21 21:10:26(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

class Solution{
public:
	int Add(int num1, int num2){
		int n1, n2;
		while(num1&num2){
			n1 = num1;
			n2 = num2;
			num1 = (n1&n2)<<1;
			num2 = n1^n2;
		}
		return num1|num2;
	}
};



int main(){
	Solution test;
	int a, b;
	while(cin >> a >> b){
		cout << test.Add(a,b) << endl;
	}
	return 0;
}
