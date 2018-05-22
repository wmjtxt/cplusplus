 ///
 /// @file    :把字符串转换成整数.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-05-22 11:39:11(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

class Solution{
public:
	int StrToInt(string str){
		int i = 0, num = 0;
		int flag = 0;
		if(str[0] == '+')
			i++;
		if(str[0] == '-'){
			i++;
			flag = 1;
		}
		while(i < str.size()){
			if(str[i] < '0' || str[i] > '9')
				return 0;
			num = 10*num + str[i]-'0';
			i++;
		}
		if(flag == 1)
			num = -num;
		return num;
	}
};


int main(){
	Solution test;
	string a;
	while(cin>>a){
		cout << test.StrToInt(a) << endl;
	}
	return 0;
}
